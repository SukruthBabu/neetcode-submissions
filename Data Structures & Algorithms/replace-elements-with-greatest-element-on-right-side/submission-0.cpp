#include <algorithm>

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {

        // this is o(n), we traverse it only once 
        int greatest = -1;
        // o(n solution)
        for (int i = static_cast<int>(arr.size())-1; i >= 0; --i)
        {
            int original = arr[i];
            arr[i] = greatest;
            greatest = max(original, greatest);
        }

        return arr;



        // below solution is O(n2) because we repeatedly searhc for elements. 
        // // i+1 to skip the last element 
        // for(int i = 0; i+1 < arr.size(); ++i)
        // {
        //     int greatest = *max_element(arr.begin() + i + 1, arr.end());
        //     arr[i] = greatest;
        // }

        // // set the last element to -1 
        // if (!arr.empty())
        // {
        //     arr.back() = -1;
        // }
        
        return arr;
    }
};