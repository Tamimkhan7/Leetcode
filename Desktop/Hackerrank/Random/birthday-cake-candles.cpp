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
    vector<int> v(n);
    int mx = 0, mx_cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(v[i], mx);
    }
    sort(all(v));
    mx_cnt = upper_bound(all(v), mx) - lower_bound(all(v), mx);
    cout << mx_cnt << '\n';
    return 0;
}