#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int ok(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt += (n % 2 == 1);
        n /= 2;
    }
    return cnt;
}

void solve(string s)
{
    int n = s.size();
    int maxSetBits = -1;
    ll bestNumber = 0;

    function<void(int, string)> backtrack = [&](int idx, string cur)
    {
        if (idx == n)
        {
            ll num = stoll(cur);
            int setBits = ok(num);
            if (setBits > maxSetBits || (setBits == maxSetBits && num > bestNumber))
            {
                maxSetBits = setBits;
                bestNumber = num;
            }
            return;
        }
        if (s[idx] == '?')
        {
            for (char d = '9'; d >= '0'; --d)
            {
                cur[idx] = d;
                backtrack(idx + 1, cur);
            }
        }
        else        
            backtrack(idx + 1, cur);        
    };

    backtrack(0, s);
    cout << bestNumber << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
