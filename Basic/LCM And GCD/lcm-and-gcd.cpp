//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector <long long> arr;
        int x=A;
        int y=B;
        while(x!=y){
            if(x>y){
                x-=y;
            }
            else{
                y-=x;
            }
        }
        
        arr.push_back((A*B)/x);
        arr.push_back(x);
        return arr;


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends