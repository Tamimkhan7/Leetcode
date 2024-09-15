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
const int N = 1e2;
void solve()
{
    int num;
    vector<int> v;
    while (cin >> num)
        v.push_back(num);
    int n = v.size();
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';
    // vector<int> pre(n, 0);
    // pre[-1] = 0;
    // for (int i = 0; i < n; i++)
    //     pre[i] = v[i] + pre[i - 1];

    // int k;
    // cin >> k;
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
