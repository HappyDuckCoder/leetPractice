#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind1 = -1;
        int ind2 = -1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind1 = i;
                break;
            }
        } 

        if (ind1 == -1) {
            //reverse
            reverse(nums.begin(), nums.end());
            return;
        } else {
            for (int i = nums.size() - 1; i > ind1; i--) {
                if (nums[i] > nums[ind1]) {
                    ind2 = i;
                    break;
                }
            }   
            swap(nums[ind1], nums[ind2]);
            reverse(nums.begin() + ind1 + 1, nums.end());
            return;
        }
    }
};

int main() {
    vector<int> nums = {1, 3, 2};
    Solution s;
    s.nextPermutation(nums);

    for (int i = 0; i < nums.size(); i++) 
        cout << nums[i] << "\n";

    return 0;
}