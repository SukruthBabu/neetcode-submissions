class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //BETTER SOLUTION 
        vector<int> result(nums.size(), 1);

        int prefix  = 1; 
        for(int i = 0; i < nums.size(); i++)
        {
            result[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for(int i = nums.size()-1; i >=0; i--)
        {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;

        // WORKS
        // vector<int> result(nums.size());

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     signed int multiply = 1;
        //     for (int j = nums.size() - 1; j >= 0; j--)
        //     {
        //         if(i == j)
        //         {
        //             continue;
        //         }
        //         multiply *= nums[j];
        //     }
        //     result[i] = multiply;
        // }

        // return result;
    }
};
