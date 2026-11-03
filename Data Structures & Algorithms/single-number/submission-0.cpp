class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto& n : nums)
        {
            count[n]++;
        }

        vector<pair<int, int>> tmp = {count.begin(), count.end()};
        sort(tmp.begin(), tmp.end(), 
                [](const auto& a, const auto& b)
                {
                    return a.second < b.second;
                });

        return tmp[0].first;
    }
};
