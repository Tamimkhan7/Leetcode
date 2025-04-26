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
    int n, m;
    cin >> n >> m;
    vector<string> garbage(n);
    vector<int> travel(m);

    for (int i = 0; i < n; i++)
        cin >> garbage[i];

    for (int i = 0; i < m; i++)
        cin >> travel[i];

    int M = 0, P = 0, G = 0;
    int ans = garbage[0].size();

    for (int i = garbage.size() - 1; i > 0; i--)
    {
        for (char ch : garbage[i])
        {
            if (ch == 'M')
            {
                M = 1;
            }
            else if (ch == 'P')
            {
                P = 1;
            }
            else
            {
                G = 1;
            }
        }
        cout << M << ' ' << P << ' ' << G << '\n';
        ans = travel[i - 1] * (M + P + G) + garbage[i].size();
        show(travel[i - 1]);
        show(ans);
    }

    return 0;
}