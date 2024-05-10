//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
    vector<vector<int>> ans;
    void solve(vector<int>& arr, int index, vector<int>& path ,long long sum, int k) 
    {
        if(sum >= k)
        {
            if(sum == k)
                ans.push_back(path);
            
            return;
        }
        if(index >= arr.size())
        {
            return;
        }
        
        path.push_back(arr[index]);
        solve(arr, index + 1, path, sum + arr[index], k);
        path.pop_back();
        
        while(index + 1 < arr.size() && arr[index] == arr[index + 1])
            index++;
            
        solve(arr, index + 1, path, sum, k);
        
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        sort(arr.begin(), arr.end());
        vector<int> path;
        long long sum = 0;
        solve(arr, 0, path, sum, k);
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
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends