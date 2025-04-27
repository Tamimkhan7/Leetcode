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
    for (int i = 0; i < (int)nums.size() - 2; i++)
    {
        int sum = nums[i] + nums[i + 2];

        show(sum);
        show(nums[i + 1] / 2);
        // cout << x << '\n';
        if (nums[i + 1] / 2 == sum)
            ans++;
    }

    cout << ans << '\n';
    return 0;
}