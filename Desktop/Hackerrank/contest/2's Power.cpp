#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define pb push_back()
#define pop pop_back()
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x = pow(2, i);
            // cout << x << '\n';
            if (x <= n)
                ans++;
            else
                break;
        }
        cout << ans << '\n';
    }
}