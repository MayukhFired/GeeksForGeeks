class Solution:
	def minCoins(self, coins, sum):
		# code here
		if sum == 0:
		    return 0
	    dp = [float('inf')] * (sum + 1)
	    dp[0] = 0
	    for i in range(1 , sum + 1):
	        for coin in coins:
	            if coin <= i:
	                dp[i] = min(dp[i] , dp[i - coin] + 1)
	    return dp[sum] if dp[sum] != float('inf') else -1