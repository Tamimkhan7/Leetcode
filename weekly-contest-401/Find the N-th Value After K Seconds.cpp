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
    int n, k;
    cin >> n >> k;
    vector<ll> v(n, 1);
    ll ans = 0;
    while (k--)
    {
        vector<ll> pre(n, 0);
        pre[-1] = 0;
        for (int i = 0; i < n; i++)
            pre[i] = (pre[i - 1] + v[i]) % mod;
        ans = pre[n - 1] % mod;
        for (int i = 0; i < n; i++)
            v[i] = pre[i] % mod;
    }
    cout << ans << '\n';
    return 0;
}
