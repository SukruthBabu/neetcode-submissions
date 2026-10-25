class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {   
        std::vector<int> ans = nums;
        int n = nums.size();
        ans.resize(2*n);

        for(int i = ans.capacity()-1; i >= nums.size(); --i)
        {
            ans[i] = nums[i - nums.size()];
        }

        return ans;
    }
};