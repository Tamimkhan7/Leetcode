#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

void solve()
{

    int n, k;
    cin >> n >> k;
    vector<int> vv(n);
    for (int i = 0; i < n; i++)
        cin >> vv[i];

    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';

    o_set<int> v;
    ll mx = 0, sum = 0;
    for (int i = 0; i < (int)vv.size(); i++)
    {
        if (v.find(vv[i]) == v.end())
        {
            v.insert(vv[i]);
            sum += vv[i];
        }
        else
        {
            sum = vv[i];
            v.clear();
            v.insert(vv[i]);
        }
        if ((int)v.size() == k)
        {
            mx = max(mx, sum);
            auto x = v.find_by_order(0);
            sum -= *x;
            v.erase(x);
            cout << *x << ' ' << sum << '\n';
        }
    }
}
int32_t main()
{
    MTK;
    solve();
    return 0;
}