//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        if(n < 3){
            return -1;
        }
        
        int dr[7] = {-1,-1,-1,0,1,1,1};
        int dc[7] = {-1,0,1,0,-1,0,1};
        
        int maxi = INT_MIN;
        for(int i=1;i<n-1;i++){
            for(int j = 1;j<m-1;j++){
                int sum = 0;
                for(int k=0;k<7;k++){
                    int nr = i+dr[k];
                    int nc = j+dc[k];
                    sum += mat[nr][nc];
                    
                }
                maxi = max(maxi,sum);
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends