//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
 
public:
int dp[1001][1001];
int solve(int m,int n,int a[],int b[]){
    if(m<0|| n<0) return 0;
    if(dp[m][n]!=-1) return dp[m][n];
    int take= b[m]*a[n] + solve(m-1,n-1,a,b);
    int not_take=(m==n)?0:solve(m,n-1,a,b);
    return dp[m][n]=max(take,not_take);
}
int maxDotProduct(int n, int m, int a[], int b[]) 
{ 
// Your code goes here
memset(dp,-1,sizeof(dp));
return solve(m-1,n-1,a,b);
} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends