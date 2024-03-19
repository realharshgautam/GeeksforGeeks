//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {

        vector<int> ans;
        priority_queue<pair<int,int>> q;
        
        for(int i=0;i<k;i++) q.push({arr[i], i});
        
        ans.push_back(q.top().first);
        
        for(int i=1;i<n-k+1;i++){
            while(!q.empty() && q.top().second < i){
                q.pop();
            }
            q.push({arr[i+k-1], i+k-1});
            ans.push_back(q.top().first);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends