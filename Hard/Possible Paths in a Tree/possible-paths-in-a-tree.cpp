//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
	public:
	int dsu(vector<pair<int,int>>& parent, int x){
	    if(parent[x].first == x){
	        return x;
	    }
	    return parent[x].first = dsu(parent, parent[x].first);
	}
	vector<int> maximumWeight(int n, vector<vector<int>> edges, int q, vector<int> &queries)
	{
	    // code here
	    vector<pair<int,int>>Q(q);
	    for(int i = 0; i < q; i++){
	        Q[i].first = queries[i];
	        Q[i].second = i;
	    }
	    sort(Q.begin(), Q.end());
	    for(int i = 0; i < n-1; i++){
	        swap(edges[i][0], edges[i][2]);
	    }
	    sort(edges.begin(),edges.end());
	    vector<pair<int,int>>parent(n);
	    for(int i = 0; i < n; i++){
	        parent[i].first = i;
	        parent[i].second = 1;
	    }
	    vector<int>ans(q);
	    int i = 0, last = 0;
	    for(int j = 0; j < q; j++){
	        while(i < n-1 && edges[i][0] <= Q[j].first){
	            int u = edges[i][1] - 1, v = edges[i][2] - 1;
	            int paru = dsu(parent, u), parv = dsu(parent, v);
	            int cu = parent[paru].second, cv = parent[parv].second;
	            last -= (cu * (cu - 1)) / 2;
	            last -= (cv * (cv - 1)) / 2;
	            parent[parv].first = paru;
	            parent[paru].second += parent[parv].second;
	            dsu(parent, parv);
	            cu += cv;
	            last += (cu * (cu - 1)) / 2;
	            i++;
	        }
	        ans[Q[j].second] = last;
	    }
	    return ans;
	}
};



//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin >> n;
        
        vector<vector<int>> edges(n-1, vector<int> (3, 0));

        for(int i = 0; i < n-1; i++)
        {
        	for(int j = 0; j < 3; j++)
        	{
        		cin >> edges[i][j];
        	}
        }

        int q;
        cin >> q;
        vector<int> queries(q);
        for(int i = 0; i < q; i++)
        	cin >> queries[i];

    	Solution obj;
    	vector<int> ans = obj.maximumWeight(n, edges, q, queries);

    	for(auto i:ans)
    		cout << i << " ";
    	cout << "\n"; 
    }
    return 0;
}

// } Driver Code Ends