class Solution(object):
    def backtracking(self, nums, res, save, visited):
        if len(save) == len(nums):
            res.append(save[:])
            return
        for i in range(len(nums)):
            if visited[i]: continue
            visited[i] = True
            save.append(nums[i])
            self.backtracking(nums, res, save, visited)
            visited[i] = False
            save.pop()

    def permute(self, nums):
        res = []
        save = []
        visited = []
        for i in range(len(nums)):
            visited.append(False)
        self.backtracking(nums, res, save, visited)
        return res
    
if __name__ == "__main__":
    nums = [1, 2, 3]
    s = Solution()
    res = s.permute(nums)
    print(res)