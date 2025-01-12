#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void backtracking(vector<int> &nums, vector<vector<int>> &res, vector<int> &save, vector<bool> &visited) {
        if (save.size() == nums.size()) {
            res.push_back(save);
            return;
        }
        for (int j = 0; j < nums.size(); j++) {
            if (visited[j]) continue;
            if (!visited[j]) {
                visited[j] = true;
                save.push_back(nums[j]);
                backtracking(nums, res, save, visited);
                save.pop_back();
                visited[j] = false;
            } 
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> save;
        vector<bool> visited(nums.size(), false);
        backtracking(nums, res, save, visited);
        return res;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    Solution s;
    vector<vector<int>> res = s.permute(nums);

    for (const auto& perm : res) {
        for (int i : perm) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
