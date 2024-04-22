//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
#include <vector>
using namespace std;

class Solution {
public:
    const int MOD = 1000000007;

    vector<vector<long long>> multiplyMatrices(const vector<vector<long long>>& mat1, const vector<vector<long long>>& mat2) {
        vector<vector<long long>> result(2, vector<long long>(2, 0));

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                for (int k = 0; k < 2; ++k) {
                    result[i][j] = (result[i][j] + (mat1[i][k] * mat2[k][j]) % MOD) % MOD;
                }
            }
        }

        return result;
    }

    vector<vector<long long>> powerMatrix(const vector<vector<long long>>& mat, int exp) {
        if (exp == 1) {
            return mat;
        }

        if (exp % 2 == 0) {
            vector<vector<long long>> halfPower = powerMatrix(mat, exp / 2);
            return multiplyMatrices(halfPower, halfPower);
        } else {
            vector<vector<long long>> halfPower = powerMatrix(mat, (exp - 1) / 2);
            return multiplyMatrices(multiplyMatrices(halfPower, halfPower), mat);
        }
    }

    int firstElement(int n) {
        vector<vector<long long>> originalMatrix = {{1, 1}, {1, 0}};
        vector<vector<long long>> resultMatrix = powerMatrix(originalMatrix, n);

        return resultMatrix[1][0] % MOD;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends