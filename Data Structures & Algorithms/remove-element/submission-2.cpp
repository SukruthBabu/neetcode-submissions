#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {

        // new solution using two pointers 
        int k = 0; 

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                ++k;
            }
        }

        return k;

        // 5 ms solution
        // for(auto it = nums.begin(); it != nums.end(); )
        // {
        //     if(*it == val)
        //     {
        //         it = nums.erase(it); // removes elment and returns the it to the next element 
        //     }
        //     else 
        //     {
        //         ++it; // increase it and move to next element in else 
        //     }
        // }

        // return nums.size(); 
    }
};