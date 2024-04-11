//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    
    #define ll long long
    
    long long pairAndSum(int n, long long arr[]) {
        // code here
        vector<ll>pre(32,0);
        ll ans =0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<32; j++){
                if((arr[i]&(1<<j))){
                    ans += (pre[j])*(1<<j);
                    pre[j]+=1;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends