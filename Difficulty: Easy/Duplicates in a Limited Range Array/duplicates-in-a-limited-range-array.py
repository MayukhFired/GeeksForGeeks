class Solution:
    def findDuplicates(self, arr):
        # code here
        freq = {}
        result = []
        for num in arr:
            freq[num] = freq.get(num , 0) + 1
            
        # Added parentheses to freq.items()
        for num , count in freq.items():
            if count > 1:
                result.append(num)
        return result
