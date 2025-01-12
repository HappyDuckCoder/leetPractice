#include <iostream> 
#include <vector>

using namespace std;

class Solution {
public:
    bool compare(vector<int>& a, vector<int>& b) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

    void backtracking(vector<int> &nums, vector<vector<int>> &res, vector<int> &save, vector<bool> &visited) {
        if (save.size() == nums.size()) {
            if (res.size() == 0) res.push_back(save);
            else {
                for (int i = 0; i < res.size(); i++) {
                    if (compare(res[i], save)) {
                        res[i] = save;
                        return;
                    }
                }
                res.push_back(save);
            }
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

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> save;
        vector<bool> visited(nums.size(), false);
        backtracking(nums, res, save, visited);
        return res;
    }
};

int main() {
    vector<int> nums = {1, 1, 2};
    Solution s;
    vector<vector<int>> res = s.permuteUnique(nums);

    for (const auto& perm : res) {
        for (int i : perm) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}