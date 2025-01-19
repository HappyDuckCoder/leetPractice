#include <iostream> 
#include <vector>
#include <set>
#include <algorithm>   

using namespace std;

class Solution {
public:
    void backtracking(int start, int n, int k, vector<int>& current, vector<vector<int>>& result) {
        if (current.size() == k) {
            result.push_back(current);
            return;
        }
        
        for (int i = start; i <= n; i++) {
            current.push_back(i);                       
            backtracking(i + 1, n, k, current, result); 
            current.pop_back();                         
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> current;
        backtracking(1, n, k, current, result); 
        return result;
    }
};


int main() {

    Solution s;
    vector<vector<int>> res = s.combine(4, 2);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}