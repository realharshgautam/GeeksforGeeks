//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int findClosest(int n, int k, int arr[]) { 
        // Using lower_bound to find the position where 'k' would be inserted
        int lb = lower_bound(arr, arr + n, k) - arr;
        
        // If the element at the lower bound is exactly 'k', return 'k'
        if (arr[lb] == k) return k;
        
        // If the lower bound index is greater than 0, we need to compare with the previous element
        if (lb > 0) {
            // Compare the differences to find the closest element
            if (k - arr[lb - 1] < arr[lb] - k) return arr[lb - 1];
            else return arr[lb];
        }
        
        // If the lower bound index is 0, the only option is the first element
        return arr[lb];
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
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends