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
    int n, p;
    cin >> n >> p;
    int x = p - 0;
    int y = (n - p);
    // if (y > 0)
    //     y--;
    // if (x < 2)
    //     cout << min(x, y) << '\n';
    // else
    cout << min(x, y) / 2 << '\n';
    return 0;
}