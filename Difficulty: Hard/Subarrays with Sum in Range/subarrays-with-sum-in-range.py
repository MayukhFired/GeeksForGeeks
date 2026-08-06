class Solution:
    def countSubarray(self, arr: list[int], l: int, r: int) -> int:
        # code here
        def counting(target):
            if target < 0:
                return 0;
            left = 0;
            count = 0;
            curr_sum = 0;
            for right in range(len(arr)):
                curr_sum += arr[right]
                
                while curr_sum > target and left <= right:
                    curr_sum -= arr[left]
                    left += 1
                count += right - left + 1
            return count
        return counting(r) - counting(l - 1)