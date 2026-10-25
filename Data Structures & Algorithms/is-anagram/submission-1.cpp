#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t)
        {
            return true;
        }

        return false;

        // if (s.length() != t.length())
        // {
        //     return false;
        // }
        
        // unordered_map<char, int> counts;

        // // load the characters in s into a dict<ch, count of that char>
        // for(auto& ch : s)
        // {
        //     counts[ch]++;
        // }

        // for(auto ch : t)
        // {
        //     // find the char in the counts dict and check how many times present
        //     auto it = counts.find(ch);
        //     if(it == counts.end() || it->second == 0)
        //     {
        //         return false;
        //     }

        //     // reduce the occurance after you have used it
        //     it->second--;
        // }

        // return true;
    }
};
