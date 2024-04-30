//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    long long fn(vector<int>&a, int n, int l, int r,int i,long long sum){
        if(i==n&&sum<=r&&sum>=l)return 1;
        if(i==n)return 0;
        long long ans=0;
       ans+=fn(a,n,l,r,i+1,sum+a[i]);
       ans+=fn(a,n,l,r,i+1,sum);
       return ans;
    }
    long long int countSubsets(vector<int>&a, int n, int l, int r){
       long long ans=fn(a,n,l,r,0,0);
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    int l, r;
	    cin >> l >> r;
	    Solution ob;
	    long long int ans = ob.countSubsets(arr, n, l, r);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends