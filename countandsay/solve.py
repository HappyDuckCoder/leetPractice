class Solution(object):
    def findRLE(self, s):
        res = ""
        count = 1
        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                count += 1
            else:
                res += str(count) + s[i - 1]
                count = 1
        res += str(count) + s[-1]
        return res

    def countAndSay(self, n):
        if n == 1:
            return "1"
        return self.findRLE(self.countAndSay(n - 1))
        