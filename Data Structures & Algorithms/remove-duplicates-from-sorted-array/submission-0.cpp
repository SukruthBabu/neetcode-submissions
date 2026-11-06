class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> unique;
        for(auto n: nums)
        {
            unique[n]++;
        }

        vector<int> res;
        for(auto [key, value]: unique)
        {
            res.push_back(key);
        }

        nums = res;
        return nums.size();
    }
};