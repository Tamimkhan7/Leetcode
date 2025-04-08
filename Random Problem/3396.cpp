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

    unordered_map<int, int> mp;
    for (auto x : nums)
        mp[x]++;
    // for (auto [x, y] : mp)
    //     cout << x << ' ' << y << '\n';
    int ans = 0;
    while (1)
    {
        bool ok = false;
        for (auto [x, y] : mp)
        {
            if (y > 1)
            {
                ok = true;
                ans++;
                int cnt = 0;
                while (!nums.empty() and cnt < 3)
                    mp[nums[0]]--, nums.erase(nums.begin()), cnt++;
                //     for (auto x : nums)
                //         cout << x << ' ';
                //     cout << '\n';
            }
        }
        if (!ok)
            break;
    }
    cout << ans << '\n';
    return 0;
}