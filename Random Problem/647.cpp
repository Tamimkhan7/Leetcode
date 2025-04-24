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
    int ans = s.size() - 1;
    string ss;
    for (int i = 0; i < (int)s.size(); i++)
    {
        ss.push_back(s[i]);
        unordered_map<char, int> mp;
        for (auto c : ss)
            mp[c]++;
        show(ss);
        for (auto [x, y] : mp)
            cout << x << ' ' << y << '\n';
        cout << '\n';
        int even = 0, odd = 0;
        for (auto [key, value] : mp)
        {
            if (value % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd < 2)
        {
            ans++;
        }
        else
            ss.erase(ss.begin());
    }
    cout << ans << '\n';
    return 0;
}