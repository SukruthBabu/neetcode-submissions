class Solution {
public:

    string encode(vector<string>& strs) {
        //idea:
        //4,2,3,4#HelloWorld
        //starting have sizes separated by commas and then after # the actual strings

        string encoded;

        // sizes of each string
        vector<int> sizes;
        for(auto& str: strs)
        {
            sizes.push_back(str.size());
        }

        // loading the size to the encoded packet
        for(int sz: sizes)
        {
            encoded.append(to_string(sz));
            encoded.push_back(',');
        }

        // add delimeter # before starting of the message 
        encoded.push_back('#');

        // now encode the words
        for(auto& str : strs)
        {
            encoded.append(str);
        }

        printf("Encoded result: %s\n", encoded.c_str());
        return encoded;

    }

    vector<string> decode(string s) {
        vector<int> sizes;
        vector<string> decoded;
        int i = 0;
        while(s[i] != '#')
        {
            int j = i;
            while(s[j] != ',')
            {
                j++;
            }
            sizes.push_back(stoi(s.substr(i, j - i)));
            i = j+1;
        }
        i++;
        for(int sz : sizes)
        {
            decoded.push_back(s.substr(i, sz));
            i += sz;
        }

        return decoded;
    
    }
};
