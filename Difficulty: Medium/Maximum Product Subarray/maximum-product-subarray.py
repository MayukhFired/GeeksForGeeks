class Solution:
	def maxProduct(self,arr):
		# code here
		n = len(arr)
		max_product = float('-inf')
		prefix = 1
		suffix = 1
		for i in range(n):
		    if prefix == 0:
		        prefix = 1
		    if suffix == 0:
		        suffix = 1
		    prefix *= arr[i]
		    suffix *= arr[n - i - 1]
		    max_product = max(max_product , prefix , suffix)
	    return max_product