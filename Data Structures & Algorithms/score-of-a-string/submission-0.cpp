class Solution {
public:
    int scoreOfString(string s) {
        int cnt=0;
        int n = s.length();

        for(int i=0;i<n-1;i++)
        {
            cnt += abs((s[i+1]-'a') - (s[i]-'a'));
        }

        return cnt;
    }
};