class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sol = ""
        maxi = 0
        if (len(s) <=1):
            return len(s)
        for c in list(s):
            current = "".join(c)
            if (current in sol):
                sol = sol[sol.index(current) + 1:]
            sol = sol + "".join(c)
            maxi = max(len(sol), maxi)
        return maxi