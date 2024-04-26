//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        int i=0,j=0;
        int dir=0;
        while(true){
            dir=(dir+matrix[i][j])%4;
            if(matrix[i][j]==1){
            matrix[i][j]=0;
            }
            if(dir==0){
               j++;
             }
            else if(dir==1){
                i++;
             }
             else if(dir==2){
                j--;
            }
             else if(dir==3){
               i--;
             }
             if(i<0){
                 i++;
                 break;
             }
             if(i==matrix.size()){
                 i--;
                 break;
                 
             }
             if(j<0){
                 j++;
                 break;
             }
             if(j==matrix[0].size()){
                 j--;
                 break;
                 
             }
        }
     return vector<int>{i,j};
     
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends