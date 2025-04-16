#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    unordered_map<char, int> fre, pre;
    unordered_map<char, bool> seen;

    int ans = 0, pre_val = 0;
    char last_char, pre_char;
    int n = s.size();

    for (int r = 0; r < n; ++r)
    {

        if (last_char != s[r])
        {
            pre_val = fre[s[r]];
            fre[s[r]] = 0;
        }
        fre[s[r]]++;
        if (fre[s[r]] >= pre_val)
            ans += (fre[s[r]] - pre_val);
        last_char = s[r];

        if (r < n and s[r] != s[r - 1])
        {
            if (pre[s[r - 1]] == 2 and !seen[r - 1])
            {
                cout << s[r - 1] << ' ' << "A" << '\n';
                ans++;
            }
            // for (auto [x, y] : seen)
            //     cout << x << ' ' << y << "\n";
            // cout << '\n';
            pre[s[r]]++;p
        }
        else
        {
            pre[s[r]]++;
            if (pre[s[r]] == 2 and !seen[r])
            {
                cout << s[r] << ' ' << "B" << '\n';
                ans++;
            }
            seen[s[r]] = true;
        }
    }
    cout << ans << '\n';
    return 0;
}