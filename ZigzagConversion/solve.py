class Solution(object):
    def convert(self, s, numRows):
        res = ""
        rows = []

        for i in range(numRows):
            rows.append("")

        lenStr = len(s)
        count = 0
        check = True

        for i in range(lenStr):
            if numRows == 1: return s

            rows[count] += s[i]

            if count == 0: check = True
            elif count == numRows - 1: check = False

            if check: count += 1
            else: count -= 1

        for i in range(numRows):
            res += rows[i]

        return res
        
        
if __name__ == '__main__':
    s = Solution()
    print(s.convert("PAYPALISHIRING", 3))
        