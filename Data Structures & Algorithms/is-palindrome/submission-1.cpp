class Solution {
public:
    bool isPalindrome(string s) {
        // Two pointer solution
        int l = 0, r = s.length() - 1;

        while(l < r)
        {
            while((l < r) && !isalnum(s[l]))
            {
                l++;
            }
            while((r > l) && !isalnum(s[r]))
            {
                r--;
            }
            if(tolower(s[l]) != tolower(s[r]))
            {
                return false;
            }
            l++; r--;
        }

        return true;

        // SOLUTION
        // string newStr = "";
        // for(char ch : s)
        // {
        //     if(isalnum(ch))
        //     {
        //         newStr += tolower(ch);
        //     }
        // }
        // return newStr == string(newStr.rbegin(), newStr.rend());
    }
};
