//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int lcs(string s1, string s2) {
    int m = s1.size();
    vector<int> prev(m + 1, 0), cur(m + 1, 0);
    for (int ind1 = 1; ind1 <= m; ind1++) {
        for (int ind2 = 1; ind2 <= m; ind2++) {
            if (s1[ind1 - 1] == s2[ind2 - 1])
                cur[ind2] = 1 + prev[ind2 - 1];
            else
                cur[ind2] = max(prev[ind2], cur[ind2 - 1]); 
        }
        prev = cur; 
    }
    return prev[m]; 
        }
    int kPalindrome(string str, int n, int k)
    {
        string s = str ;
         reverse(s.begin(),s.end());
          int ans = str.size() -  lcs(s,str);
          
          return (ans<=k);
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends