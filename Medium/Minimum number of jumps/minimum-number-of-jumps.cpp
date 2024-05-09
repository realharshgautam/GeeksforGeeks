//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int jump = 0;
        int  curr =0;
        int des = 0 ;
        // jump , current postion, destination ;
        
           if(n==0 || n==1){
               return jump;
           }
        if(arr[0]==0){
            return -1;
        }
        
        for(int i = 0 ; i<n-1 ; i++){
            
            des = max(des , arr[i]+i);
            
            if(i==curr){
                jump++;
                curr=des;
            }
            
            if(curr>=n-1){
                return jump ;
            }
            
    }
    return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends