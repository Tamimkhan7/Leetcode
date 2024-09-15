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
    int n, k;
    cin >> n >> k;
    vector<int> energy(n);
    for (int i = 0; i < n; i++)
        cin >> energy[i];
    int ans = -1e5;

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        bool flag = false;
        for (int j = i; j < n; j += k)
        {
            if (j + k < n)
                x += energy[j] + energy[k + j];
            flag = true;
        }
        cout << x << '\n';
        if (!flag)
            x = energy[i];
        ans = max(ans, x);
    }
    cout << ans << '\n';
    return 0;
}
