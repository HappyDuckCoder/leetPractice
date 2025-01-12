class Solution(object):
    def merge(self, intervals):
        sorted(intervals)
        res = []
        prev = intervals[0]

        for i in range(1, len(intervals)):
            if prev[1] >= intervals[i][0]:
                prev[1] = max(prev[1], intervals[i][1])
            else:
                res.append(prev)
                prev = intervals[i]
        res.append(prev)
        return res
    
if __name__ == "__main__":
    intervals = [[1,3],[2,6],[8,10],[15,18]]
    s = Solution()
    print(s.merge(intervals))