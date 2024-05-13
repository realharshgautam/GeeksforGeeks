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
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        vector<vector<int>> dist(rows,vector<int>(columns,1e9));
        set<pair<int,pair<int,int>>> s;
        s.insert({0,{0,0}});
        dist[0][0]=0;
        int di[4]={-1,0,1,0};
        int dj[4]={0,1,0,-1};
        while(!s.empty()){
            int cur=s.begin()->first;
            int x=s.begin()->second.first, y=s.begin()->second.second;
            s.erase(s.begin());
            if(cur!=dist[x][y]) continue;
            for(int k=0;k<4;k++){
                int nx=x+di[k], ny=y+dj[k];
                if(nx>=0 && ny>=0 && nx<rows && ny<columns && max(cur,abs(heights[nx][ny]-heights[x][y]))<dist[nx][ny]){
                    dist[nx][ny]=max(cur,abs(heights[nx][ny]-heights[x][y]));
                    s.insert({dist[nx][ny],{nx,ny}});
                }
            }
        }
        return dist[rows-1][columns-1];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int rows;
        scanf("%d", &rows);

        int columns;
        scanf("%d", &columns);

        vector<vector<int>> heights(rows, vector<int>(columns));
        Matrix::input(heights, rows, columns);

        Solution obj;
        int res = obj.MinimumEffort(rows, columns, heights);

        cout << res << endl;
    }
}

// } Driver Code Ends