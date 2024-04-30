//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int solve( vector<long long>&v , int l , int h )
    {
        int ans = 0 ;
        long long sum = v[h] ;
        long long hf = sum ;
        
        while( l <= h )
        {
            int m = (l+h)/2 ;
            
            if( v[m] < hf/2 )
            {
                l = m+1 ;
                if(abs( (hf-v[m]) - v[m] ) < sum )
                {
                    sum  = abs( (hf-v[m]) - v[m] ) ;
                    ans = m ;
                }
                
            }
            else if( v[m] > hf/2 )
            {
                h = m-1 ;
                if(abs( (hf-v[m]) - v[m] ) < sum )
                {
                    sum  = abs( (hf-v[m]) - v[m] ) ;
                    ans = m ;
                }
            }
            else{
                ans = m ;
                break ;
                
            }
        }
        
        return ans ;
        
    }
    
    int solve2( vector<long long>&v , int l , int h )
    {
        int ans = l ;
        int prev = l-1 ;
        
        long long total = v[h] - v[prev] ;
        long long mn =  total ;
        
        while( l <= h )
        {
            int m = (l+h)/2 ;
            
            long long s1 = v[m]- v[prev] ;
            long long s2 = total - s1 ;
            
            
            if( s1 < (total/2) )
            {
                l = m+1 ;
                if( abs( s1 - s2 ) < mn )
                {
                    mn = abs( s1 - s2 ) ;
                    ans = m ;
                }
                
            }
            else if( s1 > (total/2) )
            {
                h = m-1 ;
                if( abs( s1 - s2 ) < mn )
                {
                    mn = abs( s1 - s2 ) ;
                    ans = m ;
                }
            }
            else{
                ans = m ;
                break ;
                
            }
        }
        
        return ans ;
        
    }
    long long minDifference(int N, vector<int> &A) {
        // code here
        
        vector<long long>v(N , 0 ) ;
        
        v[0] = A[0] ;
        
        for( int i = 1 ; i < N ; i++ )
        {
            v[i] = v[i-1] + A[i] ;
        }
        
        
        long long ans = v[N-1] ;
        
        for( int i = 1 ; i < N-2 ; i++ )
        {
            int f = solve( v , 0 , i ) ;
            int s = solve2( v , i+1 , N-1 ) ;
            
            vector<long long >t(4) ;
            t[0] = v[f] ;
            t[1] = v[i] - v[f] ;
            t[2] = v[s] - v[i] ;
            t[3] = v[N-1] - v[s] ;
            // cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<" "<<t[3]<<endl ;
            sort( t.begin() , t.end()) ;
            
            ans = min( ans , t[3] - t[0] ) ;
            
        }
        
        return ans ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        long long ans = ob.minDifference(N, A);
        cout<<ans<<endl;
    }
    return 0;
} 
// } Driver Code Ends