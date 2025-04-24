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
    unordered_map<char, int> mp;
    int l = 0, ans = 0, n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (mp.count(s[i]) > 0)
        {
            while (l < n and mp.count(s[i]) > 0)
            {
                mp[s[l]]--;
                if (mp[s[l]] <= 0)
                    mp.erase(s[l]);
                l++;
            }
        }

        mp[s[i]]++;
        // for (auto [x, y] : mp)
        //     cout << x << ' ' << y << "\n";
        // cout << '\n';
        int x = mp.size();
        ans = max(ans, x);
    }

    return 0;
}