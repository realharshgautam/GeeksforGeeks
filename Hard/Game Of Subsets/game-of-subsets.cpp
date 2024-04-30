//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
int mod = 1e9+7;
    long long solve(int ind,vector<int>&arr,vector<int>&mask,vector<vector<int>>&dp,int cur){
        if(ind==arr.size()){
            return cur>0 ? 1 : 0;
        }
        if(dp[ind][cur]!=-1) return dp[ind][cur];
        long long take = 0;
        long long not_take = 0;
        not_take = solve(ind+1,arr,mask,dp,cur);
        if(mask[arr[ind]] && (mask[arr[ind]]&cur)==0) take = solve(ind+1,arr,mask,dp,(cur|mask[arr[ind]]));
        // cout<<take<<" "<<not_take<<endl;
        return dp[ind][cur] = (take+not_take)%mod;
    }
    long long pow(long long n,long long m){
        if(m==0) return 1;
        if(m==1) return n;
        
        if(m%2==0) return pow((n*n)%mod,m/2);
        return (n*pow(n,m-1)%mod);
    }
    int goodSubsets(vector<int> &arr, int n){
        // Code here
        unordered_map<int,int> mp={ {2,0},{3,1},{5,2},{7,3},{11,4},{13,5},{17,6},{19,7},{23,8},{29,9} };
        vector<int> mask(31,0);
        for(int i=2;i<=30;i++){
            int val = i;
            int cur = 0;
            int ok = 1;
            for(int j=2;j*j<=val;j++){
                while(val%j==0){
                    if(cur & (1<<mp[j])){
                        ok = 0;
                        break;
                    }
                    cur = cur | (1<<mp[j]);
                    val/=j;
                }
                if(ok==0) break;
            }
            if(ok && val>1) {
                if(cur & (1<<mp[val])){
                        ok = 0;
                }
                else cur = cur | (1<<mp[val]);
                
            }
            if(ok) mask[i] = cur;
            else mask[i] = 0;
        }
        int cnt = 0;
        for(int i=0;i<n;i++) if(arr[i]==1) cnt++;
        vector<vector<int>> dp(n,vector<int>(1025,-1));
        int ans = pow(2,cnt)*solve(0,arr,mask,dp,0);
        return ans%mod;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.goodSubsets(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends