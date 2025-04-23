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
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0, x = i;
        while (x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        mp[sum]++;
    }
    vector<pair<int, int>> v;
    for (auto [x, y] : mp)
        v.push_back({y, x});
    sort(v.rbegin(), v.rend());

    for (auto [x, y] : v)
        cout << x << ' ' << y << '\n';
    cout << '\n';
    int ans = 0, x = v[0].first;
    for (int i = 0; i < (int)v.size(); i++)
    {
        if (x == v[i].first)
            ans++;
        else
            break;
    }
    return 0;
}