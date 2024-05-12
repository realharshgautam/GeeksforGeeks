//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
    public:
    int dfs(vector<int>* adj,int node,vector<int>& visited,int& num)
    {
        int numNode=1;
        visited[node]=num;
        for(auto& it:adj[node])
        {
            if(visited[it]==0)
            numNode+=dfs(adj,it,visited,num);
        }
        return numNode;
    }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        
        //making adj list
        vector<int> adj[v+1];
        for(auto& it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        //finding connected components
        vector<int> visited(v+1,0);
        unordered_map<int,int> nodeMap;
        int num=1;
        for(int i=1;i<=v;i++)
        {
            if(visited[i]==0)
            {
                int nodeCnt=dfs(adj,i,visited,num);
                nodeMap[num]=nodeCnt;
                num++;
            }
        }
       
        //calculating number of good components
        unordered_map<int,int> mp;
        int cnt=0;
        for(int i=1;i<=v;i++)
        {
            if(mp.count(visited[i])==0)
            {
                if((adj[i].size()+1)==nodeMap[visited[i]])
                {
                    cnt++;
                    mp[visited[i]]=adj[i].size();
                }
                else
                mp[visited[i]]=-1;
            }
            else
            {
                if(mp[visited[i]]==-1)
                continue;
                
                if((adj[i].size()+1)!=nodeMap[visited[i]])
                {
                    cnt--;
                    mp[visited[i]]=-1;
                }
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        int res = obj.findNumberOfGoodComponent(e, v, edges);

        cout << res << endl;
    }
}

// } Driver Code Ends