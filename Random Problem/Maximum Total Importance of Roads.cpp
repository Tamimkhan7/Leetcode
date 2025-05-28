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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    int roads[m][2];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> roads[i][j];
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //         cout << roads[i][j] << ' ';
    //     cout << '\n';
    // }

    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int u = roads[i][0], v = roads[i][1];
        mp[u]++, mp[v]++;
    }

    vector<pair<int, int>> v;
    for (auto [x, y] : mp)
        v.push_back({x, y});
    sort(v.begin(), v.end(), cmp);

    for (auto [x, y] : v)
        cout << x << ' ' << y << '\n';
    cout << '\n';

    mp.clear();
    int i = n;
    for (auto [x, y] : v)
    {
        mp[x] = i;
        i--;
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int u = roads[i][0], v = roads[i][1];
        int x = mp[u], y = mp[v];
        ans += x + y;
    }
    show(ans);
    return 0;
}