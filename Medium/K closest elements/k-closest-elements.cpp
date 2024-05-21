//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
   vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        priority_queue<int> smaller;
        priority_queue<int, vector<int>, greater<int>> larger;
        
        for(int i=0; i<n; i++){
            if(arr[i] == x) continue;
            
            if(arr[i] < x ){
                smaller.push(arr[i]);
            }else{
                larger.push(arr[i]);
            }
        }
        
        vector<int>ans;
        while(!smaller.empty() and !larger.empty() and k > 0){
            int a = smaller.top();
            int b = larger.top();
            
            if(abs(x-a) < abs(b-x)){
                ans.push_back(a);
                smaller.pop();
            }else{
                ans.push_back(b);
                larger.pop();
            }
            k--;
        }
        // cout<<"sudhir"<<endl;
        if(larger.empty() and k != 0 and !smaller.empty()){
            while(k--){
                ans.push_back(smaller.top());
                smaller.pop();
            }
        }
        if(smaller.empty() and k != 0 and !larger.empty()){
            while(k--){
                ans.push_back(larger.top());
                larger.pop();
            }
        }
        return ans;
    }


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends