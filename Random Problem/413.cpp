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
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1, val;
        bool ok = false;
        for (int j = i + 1; j < n; j++)
        {
            int x = nums[j - 1];
            int y = nums[j];
            cnt++;
            int dis = (y - x);
            cout << y << ' ' << dis << '\n';
            if (!ok)
            {
                val = dis;
                ok = true;
            }
            else
            {
                if (val != dis)
                    break;
            }
            if (cnt > 2)
                ans++;
        }
    }
    show(ans);
    return 0;
}