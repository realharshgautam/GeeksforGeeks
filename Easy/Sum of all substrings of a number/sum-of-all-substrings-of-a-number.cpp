//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <iostream>
#include <string>
#define MOD 1000000007
class Solution
{
public:
    long long sumSubstrings(string s)
    {
        int n = s.length();
        long long sum = 0;
        long long lastSum = 0;
        long long multiplier = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            lastSum = (lastSum + (s[i] - '0') * multiplier) % MOD;
            sum = (sum + lastSum) % MOD;
            multiplier = (multiplier * 10 + 1) % MOD;
        }

        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends