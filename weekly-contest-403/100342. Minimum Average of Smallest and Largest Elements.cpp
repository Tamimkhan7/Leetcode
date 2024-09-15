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
    deque<double> d;
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        d.push_back(x);
    }
    for (auto x : d)
        cout << x << ' ';
    cout << '\n';
    double ans = 100000.00;
    while (!d.empty())
    {
        sort(all(d));
        double x = d.front();
        double y = d.back();
        d.pop_front();
        d.pop_back();
        ans = min(ans, double((x + y) / 2));
    }
    cout << ans << '\n';

    return 0;
}