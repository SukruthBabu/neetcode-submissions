class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> stack;

        for(int i = 0; i < temperatures.size(); i++)
        {
            int today = temperatures[i];
            while(!stack.empty() && today > stack.top().first)
            {
                auto pair = stack.top();
                stack.pop();
                res[pair.second] = i - pair.second;
            }

            stack.push({today, i});
        }

        return res;
    }
};
