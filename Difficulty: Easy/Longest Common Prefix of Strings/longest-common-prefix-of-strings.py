class Solution:
    def longestCommonPrefix(self, arr):
        # code here
        if not arr:
            return ""
        for i in range(len(arr[0])):
            char = arr[0][i]
            for string in arr[1:]:
                if i == len(string) or string[i] != char:
                    return arr[0][:i]
        return arr[0]