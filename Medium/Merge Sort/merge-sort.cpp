//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends

class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        int an = m - l + 1;
        int bn = r - m;

        // Create two arrays
        int a[an];
        int b[bn];

        // Copy the values
        for (int i = 0; i < an; i++)
        {
            a[i] = arr[l + i];
        }

        for (int j = 0; j < bn; j++)
        {
            b[j] = arr[m + 1 + j];
        }

        // Merge two sorted arrays
        int i = 0;
        int j = 0;
        int k = l;
        while (i < an && j < bn)
        {
            if (a[i] < b[j])
            {
                arr[k++] = a[i++];
            }
            else
            {
                arr[k++] = b[j++];
            }
        }

        // Copy the remaining elements of a[] if any
        while (i < an)
        {
            arr[k++] = a[i++];
        }

        // Copy the remaining elements of b[] if any
        while (j < bn)
        {
            arr[k++] = b[j++];
        }
    }

public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l >= r)
            return;

        int mid = l + (r - l) / 2; // Fixed the calculation of mid
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends