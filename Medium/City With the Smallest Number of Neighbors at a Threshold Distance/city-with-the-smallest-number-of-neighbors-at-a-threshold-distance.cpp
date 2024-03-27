//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int dt) {
        // Your code here
        vector<pair<int,int>>adj[n];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }
         vector<pair<int,int>>v;
           int maxi = INT_MAX; 
             int result = -1;
        for(int i=0;i<n;i++)
        {
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>>q;
        vector<int>visited(n,1e9);
        visited[i]=0;
        q.push({i,0});
        int count=0;
        while(!q.empty())
        {
            pair<int,int>ll=q.top();
            int h=ll.first;
            int k=ll.second;
            q.pop();
            for(auto it:adj[h])
            {
                if( k+it.second<visited[it.first])
                {
                    visited[it.first]=k+it.second;
                    q.push({it.first,k+it.second});
                }
            }
        }
          for(int j = 0; j < visited.size(); j++){
            if(visited[j] <= dt){
                count++;
            }
        }
           if(count <= maxi){
            maxi = count;
            result = i;
            }
        
        }
        
        return result;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends