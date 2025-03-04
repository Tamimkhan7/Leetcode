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
bool solve()
{
    int n;
    cin >> n;
    bool ok = true;
    vector<int> v;
    for (int i = 1; i <= 15; i++)
    {
        for (int j = 15; j >= 0; j--)
        {
            ll x = round(pow(3, j));
            if (n >= x and n % x == 0)
            {
                if (find(all(v), j) == v.end())
                {
                    v.push_back(j);
                    n -= x;
                    break;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
    }
    show(n);
}
int32_t main()
{
    MTK;

    bool ok = solve();
    // cout << ok << '\n';
    return 0;
}