//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

#define all(x) x.begin(), x.end()
class Solution
{
public:
    int minRow(int n, int m, vector<vector<int>> a)
    {
        return min_element(all(a), [](const auto &x, const auto &y) { return count(all(x), 1) < count(all(y), 1); }) - a.begin() + 1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends