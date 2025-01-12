#include <iostream> 
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> ans;

        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            ans[key].push_back(s);
        }

        vector<vector<string>> res;
        for (auto& str : ans) {
            res.push_back(str.second);
        }

        return res;        
    }
};

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution s;
    vector<vector<string>> res = s.groupAnagrams(strs);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }   

    return 0;
}