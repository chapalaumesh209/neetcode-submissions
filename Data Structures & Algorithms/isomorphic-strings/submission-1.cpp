class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char len_s[128] = {0};
        char len_t[128] = {0};

        if(s.size() != t.size())
        {
            return false;
        }

        for(int i=0;i<s.length();i++)
        {
            if(len_s[s[i]] != len_t[t[i]])
            {
                return false;
            }

            len_s[s[i]] = i+1;
            len_t[t[i]] = i+1;
        }

        return true;
    }
};