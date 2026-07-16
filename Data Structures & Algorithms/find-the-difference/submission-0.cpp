class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>arr(26,0);
        int n = s.length();
        char c;

        for(int i=0;i<n;i++)
        {
            arr[s[i]-'a']++;
        }

        for(int i=0;i<n+1;i++)
        {
            arr[t[i]-'a']--;
        }

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] != 0)
            {
                c = i+'a';
                break;
            }
        }

        return c;

    }
};