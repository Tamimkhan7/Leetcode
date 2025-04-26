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
    int minK, maxK;
    cin >> minK >> maxK;

    map<int, int> mp;
    n = nums.size();
    int ans = 0, mx = 0, mn = 1e6 + 9;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(nums[i], mx), mn = min(mn, nums[i]);
        mp[nums[i]]++;
        show(ans);
        if (mn < minK || mx > maxK)
        {
            // cout << nums[i] << '\n';
            // for (auto [x, y] : mp)
            //     cout << x << ' ' << y << '\n';
            // cout << '\n';

            while (l < n and mp.size() >= 1)
            {
                mp[nums[l]]--;
                if (mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++;
                if (mp.size() > 0)
                    mx = mp.rbegin()->first, mn = mp.begin()->first;
                else
                    mx = 0, mn = 1e9;
                // show(mx), show(mn);
                if (mp.size() >= 1 and mp.begin()->first == minK and mp.rbegin()->first == maxK)
                {
                    for (auto [x, y] : mp)
                        ans += y;
                }
                else
                    break;
            }
            mp.clear();
        }
        else if (mn == minK and maxK == mx)
            ans++;
    }

    while (l < n and mp.size() >= 1)
    {
        mp[nums[l]]--;
        if (mp[nums[l]] == 0)
            mp.erase(nums[l]);
        l++;
        if (mp.size() >= 1 and mp.begin()->first == minK and mp.rbegin()->first == maxK)
        {
            for (auto [x, y] : mp)
                ans += y;
        }
        else
            break;
    }
    cout << ans << '\n';
    return 0;
}