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
    string tiles;
    cin >> tiles;
    unordered_map<string, int> mp;
    int n = tiles.size();
    for (int i = 0; i < (1 << n); i++)
    {
        string s = "";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                s += tiles[j];
        }
        if (s.empty())
            continue;
        sort(s.begin(), s.end());
        do
        {
            show(s);
            if (!mp.count(s))
                mp[s]++;

        } while (next_permutation(s.begin(), s.end()));
    }

    for (auto [x, y] : mp)
        cout << x << ' ' << y << '\n';
    cout << mp.size();
    return 0;
}