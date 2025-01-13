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
    map<char, int> mp, mp2;
    for (auto c : s)
        mp[c]++;

    // for (auto [x, y] : mp)
    //     cout << x << ' ' << y << '\n';
    for (auto [x, y] : mp)
    {
        int d_font, d_back;
        if (y == 2)
            continue;
        if (y % 2 == 0)
        {
            d_font = y / 2 - 1;
            d_back = y / 2 - 1;
        }
        else
        {
            d_font = y / 2;
            d_back = y / 2;
        }
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (d_font > 0 and s[i] == x)
            {
                s.erase(s.begin() + i);
                d_font--;
            }
        }
        for (int i = (int)s.size(); i >= 0; i--)
        {
            if (d_back > 0 and s[i] == x)
            {
                s.erase(s.begin() + i);
                d_back--;
            }
        }
    }
    // cout << '\n';
    // for (auto c : s)
    //     mp2[c]++;
    // for (auto [x, y] : mp2)
    //     cout << x << ' ' << y << '\n';
    cout << s.size() << '\n';
    return 0;
}