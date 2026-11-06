class Solution {
public:
    int firstUniqChar(string s) {
        map<char,pair<int,int>> count;

        for(int i = 0; i < s.size(); ++i)
        {
           
            count[s[i]].first++;
            count[s[i]].second = i; 
           
        }

        for (int i = 0; i < s.size(); ++i) 
        {
            if (count[s[i]].first == 1) {
                return i;
            }
        }

        return -1;
    }
};