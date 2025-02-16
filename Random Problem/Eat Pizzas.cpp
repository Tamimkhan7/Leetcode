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
    vector<int> pizzas;
    int x;
    while (cin >> x)
    {
        pizzas.push_back(x);
    }
    map<int, int> mp;
    for (auto x : pizzas)
        mp[x]++;

    sort(pizzas.rbegin(), pizzas.rend());
    int n = pizzas.size();
    int k = n / 4, cnt = 0, odd, even;
    if (k % 2 != 0)
        odd = k / 2 + 1, even = k / 2;
    else
        odd = k / 2, even = k / 2;

    long long ans = 0;
    vector<pair<int, int>> vp;
    for (auto [x, y] : mp)
    {
        vp.push_back({x, y});
    }
    sort(vp.rbegin(), vp.rend());
    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << ' ' << vp[i].second << '\n';
    }

    long long ans = 0;
    while(vp[i].second>0){
        
    }
    // for (int i = 0; i < n; i += 2)
    // {
    //     if (odd > 0)
    //         ans += pizzas[i];
    //     else
    //         break;
    //     odd--;
    // }

    // for (int i = k; i < n; i += k)
    // {
    //     if (even > 0)
    //         ans += pizzas[i];
    //     else
    //         break;
    //     even--;
    // }
    // cout << ans << '\n';
}