#User function Template for python3

class Solution:
    def subarray(self, arr, max):
        n = len(arr)
        sum=0
        count=1
        for num in range(n):
            if sum+arr[num] <= max:
                sum+=arr[num]
                
            else:
                count+=1
                sum = arr[num]
                
        return count        
        
    def splitArray(self, arr, N, K):
        
        if K >N:
            return -1
            
        low = max(arr)
        high = sum(arr)
        while low <= high:
            mid = (low+high)//2
            
            count = self.subarray(arr,mid)
            
            if count > K:  #we check if the count is greater than k 
                low = mid+1  #check if greater than  mid move right
                
            else:
                high = mid-1 #check if  lesser than mid move left
                
        return low    
        # code here 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K=map(int,input().split())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.splitArray(arr,N,K))
# } Driver Code Ends