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

    int count = 0, ans = 1;
    vector<int> cnt(30, 0);
    for (int i = 0; i < (int)nums.size(); i++)
    {
        count++;
        for (int k = 0; k < 30; k++)
        {
            if (nums[i] >> k & 1)
                cnt[k]++;
        }
        // show(nums[i]);
        // show(count);
        // for (int k = 0; k < 30; k++)
        // {
        //     cout << k << ' ' << cnt[k] << '\n';
        // }
        bool ok = true;
        for (int k = 0; k < 30; k++)
        {
            if (cnt[k] > 1)
            {
                count--;
                ok = false;
                break;
            }
        }

        ans = max(ans, count);
        if (!ok)
        {
            count = 1;
            for (int k = 0; k < 30; k++)
                cnt[k] = 0;
            for (int k = 0; k < 30; k++)
            {
                if (nums[i] >> k & 1)
                    cnt[k]++;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
