#include <unordered_map>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        unordered_map<int, int> umap;
        int maxOnes = 0;

        for(auto& elem: nums)
        {
            if(elem  == 1)
            {
                umap[elem]++;
            }
            else if (elem != 1)
            {
                umap[1] = 0;
            }
             
            if(umap[1] > maxOnes)
            {
                maxOnes = umap[1];
                
            }
        }

        return maxOnes;


        // int noOfConsecutiveOnes = 0; 
        // int maxOnes = 0;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if(nums[i] == 1)
        //     {
        //         noOfConsecutiveOnes += 1;
        //         if (noOfConsecutiveOnes > maxOnes)
        //         {
        //             maxOnes = noOfConsecutiveOnes;
        //         }
        //     }
        //     else
        //     {
        //         noOfConsecutiveOnes = 0;
        //     }
        // }      

        // return maxOnes;
    }
};