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
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<pair<int, int>> element;
    vector<bool> marked(n, false);
    for (int i = 0; i < n; i++)
        element.push_back({v[i], i});
    sort(all(element));
    ll ans = 0;
    for (auto [val, idx] : element)
    {
        if (marked[idx])
            continue;
        ans += val;
        marked[idx] = true;
        if (idx > 0)
            marked[idx - 1] = true;
        if (idx + 1 < n)
            marked[idx + 1] = true;
    }
    cout << ans << '\n';
    return 0;
}