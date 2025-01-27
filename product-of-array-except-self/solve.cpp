#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int cnt0 = 0, p = 1;
        for (auto i : nums)
        {
            if (i == 0)
            {
                cnt0++;
                continue;
            }
            p *= i;
        }
        if (cnt0 > 1)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                nums[i] = 0;
            }
        }
        else if (cnt0 == 1)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0)
                    nums[i] = p;
                else
                    nums[i] = 0;
            }
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                nums[i] = p / nums[i];
            }
        }

        return nums;
    }
};

int main()
{

    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    s.productExceptSelf(nums);

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << "\n";

    return 0;
}