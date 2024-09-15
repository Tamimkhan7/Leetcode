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
    int n;
    vector<int> v, x;
    while (cin >> n)
    {
        v.push_back(n);
        x.push_back(n);
    }
    for (auto xx : v)
        cout << xx << ' ';
    cout << '\n';
    int cnt = 0;
    sort(x.begin(), x.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (x[i] != v[i])
            cnt++;
    }
    cout << cnt << '\n';
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
