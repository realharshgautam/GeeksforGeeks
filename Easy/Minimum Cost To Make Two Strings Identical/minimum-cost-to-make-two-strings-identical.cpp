//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {

public:
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
        int n=x.size(),m=y.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(x[i-1]==y[j-1]) {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int cur=dp[n][m],res=0;
        if(n>=cur) res+=(n-cur)*costX;
        else res+=(n*costX);
        if(m>=cur) res+=(m-cur)*costY;
        else res+=(m*costY);
        return res;
    }
};



//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        int costX, costY;
        cin >> costX >> costY;

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends