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
    int n, mxval;
    cin >> n >> mxval;
    int ans = 0;
    for (int i = 1; i <= mxval; i++)
    {
        if (i == 1)
            ans++;
        else
            ans += (n - 1);
    }

    for (int i = 2; i <= mxval; i++)
    {
        for (int j = i; j <= mxval; j += i)
        {
            if (j == i)
                ans++;
            else
                ans += (n - 1);
        }
    }
    cout << ans << '\n';
    return 0;
}