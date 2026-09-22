class Solution:
    def largest(self, arr):
        # code here
        largest = 0
        for i in range(len(arr)):
            largest = max(largest , arr[i])
        return largest
