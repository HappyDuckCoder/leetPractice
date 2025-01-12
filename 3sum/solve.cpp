#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        
        int n = nums.size();

        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1, k = n - 1;

            while(j < k){
                int total = nums[i] + nums[j] + nums[k];
                if(total > 0) k--;
                else if(total < 0) j++;
                else{
                    res.push_back({nums[i], nums[j], nums[k]});  
                    j++;

                    // handle collision 
                    while(nums[j] == nums[j - 1] && j < k) j++;
                } 
            }
        }
        
        return res;
    }
};


int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    
    Solution s;

    vector<vector<int>> res = s.threeSum(nums);

    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}