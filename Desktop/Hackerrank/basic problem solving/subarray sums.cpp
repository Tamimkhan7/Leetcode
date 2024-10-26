#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    while (cin >> n)
    {
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<ll> v;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
                v.push_back(i);
        }
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';

        vector<ll> pre(n + 1, 0);
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + a[i];

        int q;
        cin >> q;
        int xp;
        cin >> xp;

        while (q--)
        {
            int l, r, x;
            cin >> l >> r >> x;

            auto it = lower_bound(all(v), l) - v.begin();
            auto it2 = upper_bound(all(v), r) - v.begin();
            it++, it2++;
            // cout << it << ' ' << it2 << '\n';
            ll count_zeros = it2 - it;

            ll ans = count_zeros * x;
            cout << (pre[r] - pre[l - 1]) + ans << '\n';
        }
    }

    return 0;
}
