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
    vector<int> a(4), b(n);
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // reverse(a.begin(), a.end());
    for (auto x : b)
        cout << x << ' ';
    cout << '\n';
    ll mx = -1e18 + 9;

    ll ans = a[0] * b[b.size() - 4] + a[1] * b[b.size() - 3] + a[2] * b[b.size() - 2 + 2] + a[3] * b[b.size() - 1];
    mx = max(ans, mx);
    cout << ans << ' ' << mx << '\n';

    return 0;
}