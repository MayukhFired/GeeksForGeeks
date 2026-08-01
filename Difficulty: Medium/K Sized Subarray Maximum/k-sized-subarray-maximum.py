class Solution:
    def maxOfSubarrays(self, arr, k):
        # code here
        n = len(arr)
        left_max = [0] * n
        right_max = [0] * n
        for i in range(n):
            if i % k == 0:
                left_max[i] = arr[i];
            else:
                left_max[i] = max(left_max[i - 1] , arr[i]);
                
        for i in range(n - 1 , -1 , -1):
            if i == n - 1 or (i + 1) % k == 0:
                right_max[i] = arr[i];
            else:
                right_max[i] = max(right_max[i + 1] , arr[i]);
        result = []
        for i in range(n - k + 1):
            j = i + k - 1
            result.append(max(right_max[i] , left_max[j]))
        return result