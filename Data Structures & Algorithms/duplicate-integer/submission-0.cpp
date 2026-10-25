#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(auto elem: nums)
        {
            if(count(nums.begin(), nums.end(), elem) > 1)
            {
                return true;
            }
        }

        return false;
    }

};