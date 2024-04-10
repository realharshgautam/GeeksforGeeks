#User function Template for python3

class Solution:    
    def grayToBinary(self,n):
        ans=0
        while n:
            ans^=n
            n>>=1
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        ob=Solution()
        print(ob.grayToBinary(n))
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends