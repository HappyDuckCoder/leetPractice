#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int res = 1000000;

        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = n - 1;
            while(j < k){
                int total = nums[i] + nums[j] + nums[k];
                
                if(res == 1000000 || (abs(target-total) < abs(target-res)))
                    res = total;
                
                if(total > target) k--;
                else if(total < target) j++;
                else return total;
                
            }
        }

        return res;
    }
};

int main(){
    
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    Solution s;
    cout << s.threeSumClosest(nums, target);

    return 0;
}