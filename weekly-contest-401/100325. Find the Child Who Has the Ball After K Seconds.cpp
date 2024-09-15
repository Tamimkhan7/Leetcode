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
    int n, k;
    cin >> n >> k;

    int x = 2 * (n - 1);
    int pos = k % x;

    if (pos < n)
        cout << pos << '\n';
    else
        cout << x - pos << '\n';

    return 0;
}
