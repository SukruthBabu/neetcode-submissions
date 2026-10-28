#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqCountMap;

        for (auto& num : nums)
        {
            freqCountMap[num]++;
        }


        // copy map to vec as sort doesnt work on maps
        vector<pair<int, int>> entries(freqCountMap.begin(), freqCountMap.end());


        // sort the map in reverse
        sort(entries.begin(), entries.end(), 
            [](const auto& a, const auto& b)
            {
                return a.second > b.second;
            }
            );


        vector<int> result;
        result.reserve(k);
        for(int i=0; i < k; ++i)
        {
            result.push_back(entries[i].first);
        }

        return result;
    }
};
