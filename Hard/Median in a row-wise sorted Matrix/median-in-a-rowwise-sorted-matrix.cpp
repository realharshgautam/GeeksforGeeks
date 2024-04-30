//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int blackbox(vector<vector<int>> &matrix,int t)
{
  int c=0,i;
  for(i=0;i<matrix.size();i++)
  {
      int l=0,h=matrix[i].size()-1,m,ans=matrix[i].size();
      while(l<=h)
      {
          m=(l+h)/2;
          if(matrix[i][m]>t)
          {
              ans=m;
              h=m-1;
          }
          else
          l=m+1;
      }
      c=c+ans;
      
  }
  return c;
}
    int median(vector<vector<int>> &matrix, int R, int C){
        int l=INT_MIN,r=INT_MAX,i,req=(R*C)/2,m=0;
        for(i=0;i<R;i++)
        {
            l=max(l,matrix[i][C-1]);
            r=min(r,matrix[i][0]);
        }
        while(l>=r)
        {
            m=(l+r)/2;
           int smallerequal=blackbox(matrix,m);
            if(smallerequal<=req)
            r=m+1;
            else
            l=m-1;
        }
        return r;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends