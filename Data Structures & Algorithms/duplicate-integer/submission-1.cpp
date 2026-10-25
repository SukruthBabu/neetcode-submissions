#include <algorithm>
#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> counts;

        for(auto elem : nums)
        {
            counts[elem]++; 
            if(counts[elem] > 1)
            {
                return true;
            }
        }
        
        return false;
    }

};