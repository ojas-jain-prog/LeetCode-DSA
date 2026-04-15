class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        int ans = INT_MAX;
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]] == 1)
            {
                ans = min(i,ans);
            }
        }
        if(ans!=INT_MAX)
            return ans;
        else
            return -1;
        

    }
};