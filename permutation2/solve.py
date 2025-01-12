class Solution(object):
    def compare(self, a, b): 
        for i in range(len(a)):
            if a[i] != b[i]:
                return False
        return True
    
    def backtracking(self, nums, res, save, visited):
        if len(save) == len(nums):
            if not any(self.compare(r, save) for r in res):
                res.append(save[:])
            return
        
        for i in range(len(nums)):
            if visited[i]: continue
            visited[i] = True
            save.append(nums[i])
            self.backtracking(nums, res, save, visited)
            visited[i] = False
            save.pop()

    def permuteUnique(self, nums):
        res = []
        save = []
        visited = [False] * len(nums)
        self.backtracking(nums, res, save, visited)
        return res
    
if __name__ == "__main__":
    nums = [2, 2, 3]
    s = Solution()
    res = s.permuteUnique(nums)
    print(res)
