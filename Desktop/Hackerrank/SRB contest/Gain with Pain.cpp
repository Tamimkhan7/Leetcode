#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

ll ok(ll n)
{
    ll res = n;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            res -= res / i;
        }
    }
    if (n > 1)
        res -= res / n;
    return res;
}

map<ll, ll> pref(ll n)
{
    map<ll, ll> div;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div[i] = ok(n / i);
            if (i != n / i)
            {
                div[n / i] = ok(i);
            }
        }
    }
    return div;
}

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> qu(q);
        for (int i = 0; i < q; i++)
            cin >> qu[i];

        map<ll, ll> mp = pref(n);

        cout << "Case " << ++cs << ": ";
        for (int i = 0; i < q; i++)
        {
            ll m = qu[i];
            if (n % m != 0)
                cout << 0 << (i == q - 1 ? "\n" : " ");
            else
                cout << mp[m] << (i == q - 1 ? "\n" : " ");
        }
    }
    return 0;
}
