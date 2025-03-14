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

ll ok(ll x, vector<int> &candies)
{
    ll ans = 0;
    for (auto val : candies)
        ans += val / x;

    return ans;
}

int32_t main()
{
    MTK;
    ll n, k;
    cin >> n >> k;
    vector<int> candies(n);
    for (int i = 0; i < n; i++)
        cin >> candies[i];

    ll mx_ele = *max_element(candies.begin(), candies.end());

    ll l = 1, r = max(k, mx_ele), ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        show(mid);
        ll res = ok(mid, candies);
        show(res);
        if (res == k)
        {
            ans = mid;
            break;
        }
        else if (res > k)
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }
    show(ans);
    return 0;
}
