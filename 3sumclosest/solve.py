class Solution(object):
    def threeSumClosest(self, nums, target):
        n = len(nums)
        nums.sort()

        res = 1000000

        for i in range(n):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            j, k = i + 1, n - 1
            while j < k:
                total = nums[i] + nums[j] + nums[k]
                if res == 1000000 or abs(target - total) < abs(target - res):
                    res = total
                if total > target: k -= 1
                elif total < target: j += 1
                else: return target
        return res
    
if __name__ == '__main__':
    nums = [-1, 2, 1, -4]
    target = 1
    print(Solution().threeSumClosest(nums, target))
        