class Solution:
	def twoSum(self, arr, target):
		# code here
		n = len(arr)
		if n == 0 or n == 1:
		    return False
		arr.sort()
		left = 0
		right = n - 1
		while left < right:
		    sum = arr[left] + arr[right]
		    if sum == target:
		        return True
		    if sum > target:
		        right -= 1
		    else:
		        left += 1
		return False
		    