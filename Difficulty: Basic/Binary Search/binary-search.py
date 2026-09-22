class Solution:
    def binarySearch(self, arr, k):
        # code here
        for i in range(len(arr)):
            if arr[i] == k:
                return True
        return False