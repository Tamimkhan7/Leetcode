#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sort(all(v[i]));
    }

    int p;
    cin >> p;
    vector<string> q(p);
    for (int i = 0; i < p; i++)
    {
        cin >> q[i];
        sort(all(q[i]));
    }

    map<string, int> mp, mp2;
    for (auto x : v)
        mp[x]++;
    for (auto x : q)
        mp2[x]++;
    // for (auto [x, y] : mp)
    //     cout << x << ' ' << y << '\n';
    for (int i = 0; i < p; i++)
    {
        string s = q[i];
        if (mp.find(s) != mp.end())
            cout << mp[s] << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}