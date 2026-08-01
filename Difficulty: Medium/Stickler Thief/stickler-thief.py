class Solution:  
    def findMaxSum(self, arr):
        # code here
        n = len(arr)
        if n == 1:
            return arr[0]
            
        prev1 = max(arr[0] , arr[1])
        prev2 = arr[0]
        
        for i in range(2 , n):
            curr = max(arr[i] + prev2 , prev1)
            prev2 = prev1
            prev1 = curr
        return prev1