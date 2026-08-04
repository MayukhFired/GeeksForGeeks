class Solution:
    def countPairs(self, arr: list[int], k: int) -> int:
        # code here
        count = 0
        arr.sort()
        n = len(arr)
        right = 0
        for left in range(n):
            while right < n and arr[right] - arr[left] < k:
                right += 1
            
            count += (right - left - 1)
        return count 