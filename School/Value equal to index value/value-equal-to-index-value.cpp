//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(int arr[], int n) {
        vector<int> v;
        // iterating over all the elements in the array
        for (int i = 0; i < n; i++) {
            // checking if the element is equal to its index + 1
            if (arr[i] == i + 1) {
                // adding the element to the vector
                v.push_back(i + 1);
            }
        }
        // returning the vector with elements that are equal to their index
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends