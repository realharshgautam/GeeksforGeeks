//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int sLen = s.size();
        int tLen = t.size();
        
        vector<vector<int>> dp(sLen+1,vector<int>(tLen+1,-1));
        
        return editDistanceRecur(s,t,sLen,tLen, dp);
    }
    
    int editDistanceRecur(string &s, string &t, int sLen, int tLen, vector<vector<int>> &dp){
        
        if(sLen == 0) return tLen;
        
        if(tLen == 0) return sLen;
        
        if(dp[sLen][tLen] != -1){
            return dp[sLen][tLen];
        }
        
        if(s[sLen-1] == t[tLen-1]){
            return dp[sLen][tLen] = editDistanceRecur(s,t,sLen-1,tLen-1,dp);
        }
        else{
            return dp[sLen][tLen] =  1 + min(
             editDistanceRecur(s,t,sLen-1,tLen-1,dp),
             min(
               editDistanceRecur(s,t,sLen-1,tLen,dp),
               editDistanceRecur(s,t,sLen,tLen-1,dp)
             )
            );
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends