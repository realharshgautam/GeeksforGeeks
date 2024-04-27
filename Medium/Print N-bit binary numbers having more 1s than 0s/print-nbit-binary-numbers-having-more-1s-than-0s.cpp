//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void solve(int cnt, vector<string> &ans, string &op, int n) {
        if (cnt == n) {
            ans.push_back(op);
            return;
        }
    
        if (op[0] == '0') {
            op.pop_back();
            return;
        }
    
        op.push_back('1');
        solve(cnt + 1, ans, op, n);
        op.pop_back();
    
        op.push_back('0');
        solve(cnt + 1, ans, op, n);
        op.pop_back();
    }
    
    vector<string> NBitBinary(int n) {
    	    // Your code goes here
        vector<string> ans;
        string op;
        int cnt = 0;
    
        solve(cnt, ans, op, n);
        vector<string> mans;
    
        for (auto &i : ans) {
            int oc = 0, zc = 0;
            bool flag = true;
            for (auto &j : i) {
                if (j == '1')
                    oc++;
                else    
                    zc++;
                if (zc > oc) {
                    flag = false;
                    break;
                }
            }
            
            if (flag)
                mans.push_back(i);

        }
        return mans;
    
    }
 
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends