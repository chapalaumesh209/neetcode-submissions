class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>arr(26,0);

        for(char c : ransomNote)
        {
            arr[c-'a']++;
        }

        for(char c : magazine)
        {
            arr[c-'a']--;
        }

        for(int i : arr)
        {
            if(i > 0)
            {
                return false;
            }
        }

        return true;
    }
};