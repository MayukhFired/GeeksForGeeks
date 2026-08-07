class Solution:
    def countMinOperations(self, arr):
        # code here
        total_increments = 0
        max_doubles = 0
        
        for num in arr:
            if num > 0:
                # bin(num).count('1') counts the total number of 1-increments needed
                total_increments += bin(num).count('1')
                # The position of the highest bit minus 1 is the number of doubles needed
                max_doubles = max(max_doubles, num.bit_length() - 1)
                
        return total_increments + max_doubles