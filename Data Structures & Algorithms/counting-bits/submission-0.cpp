class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;

        for(int i = 0; i <= n; i++)
        {
            int count = 0;

            int tmp = i;
            while(tmp > 0)
            {
                if((tmp&1) == 1)
                {
                    count += 1;
                }
                tmp = tmp >> 1;
            }

            res.push_back(count);
        }

        return res;
    }
};
