#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int first = INT_MAX, second = INT_MAX;
        for (int n : nums)
        {
            if (n <= first)
                first = n;
            else if (n <= second)
                second = n;
            else
                return true;
        }
        return false;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution s;
    cout << s.increasingTriplet(nums);
}