class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int n = s.size();
        map<char, int> mp;
        int ans = 0, l = 0;

        for (int r = 0; r < n; r++)
        {
            mp[s[r]]++;

            while (mp.size() == 3)
            {
                ans += n - r;
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                    mp.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};