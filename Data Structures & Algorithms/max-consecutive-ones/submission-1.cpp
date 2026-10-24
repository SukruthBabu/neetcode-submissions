class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int noOfConsecutiveOnes = 0; 
        int maxOnes = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                noOfConsecutiveOnes += 1;
                if (noOfConsecutiveOnes > maxOnes)
                {
                    maxOnes = noOfConsecutiveOnes;
                }
            }
            else
            {
                noOfConsecutiveOnes = 0;
            }
        }      

        return maxOnes;
    }
};