class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {   
        // create a new array and copy over the contents from orig arr
        std::vector<int> ans = nums;

        // resize new array 
        int n = nums.size();
        ans.resize(2*n);

        // iterate new array from reverse till the orig arr end i.e idx 7 to idx 4
        for(int i = ans.capacity()-1; i >= nums.size(); --i)
        {
            ans[i] = nums[i - nums.size()];
        }

        return ans;
    }
};