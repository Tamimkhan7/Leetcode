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
    vector<int> v;
    while (cin >> n)
        v.push_back(n);

    sort(all(v));
    int ans = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] > ans)
            ans += v[i];
    }
    cout << ans << '\n';

    return 0;
}
