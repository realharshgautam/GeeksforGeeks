//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends


class Solution {
  public:
    long long pairWithMaxSum(long long arr[], long long N)   {
       
    long maxSum=-1; //track highest sum
   
    for(int i=0;i<N-1;i++){
        long currentSum=arr[i]+arr[i+1];  //calculate sum of every consecutive elements
        if(currentSum>maxSum){  //if the current sum of the consecutive elements sub array is greater 
            maxSum=currentSum; //then what we have seen update max sum
        }
    }
    
    return maxSum;
}
};


//{ Driver Code Starts.
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.pairWithMaxSum(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends