//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {

        vector<int>ans;

        int mod=1e9+7;

        int curr=1;

        int prev=0;

        ans.push_back(prev);

        ans.push_back(curr);

        int s;

        for(int i=0;i<n-1;i++){

            s=(curr+prev)%mod;

            ans.push_back(s);

            prev=curr%mod;

            curr=s%mod;

        }

        return ans;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends