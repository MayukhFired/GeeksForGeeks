class Solution:
    def utility(self, x):
        # code here
        while x >= 0:
        # print with end=" " keeps the output on a single line with spaces
            print(x , end = " ")
        # Decrement x to move closer to 0
            x -= 1