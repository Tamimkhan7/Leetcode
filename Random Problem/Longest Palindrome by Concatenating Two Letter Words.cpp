class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        unordered_map<string, int> mp;
        for (auto s : words)
            mp[s]++;

        int ans = 0;
        bool use = false;

        for (auto [s, cnt] : mp)
        {
            string ss = s;
            reverse(ss.begin(), ss.end());

            if (s == ss)
            {

                int P_cnt = cnt / 2;
                ans += P_cnt * 4;
                mp[s] -= P_cnt * 2;

                if (mp[s] > 0 and !use)
                {
                    ans += 2;
                    use = true;
                }
            }
            else if (mp.count(ss))
            {
                int P_cnt = min(cnt, mp[ss]);
                ans += P_cnt * 4;
                mp[s] -= P_cnt;
                mp[ss] -= P_cnt;
            }
        }

        return ans;
    }
};
