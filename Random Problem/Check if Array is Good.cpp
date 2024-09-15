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
    vector<int> nums;
    int ab;
    while (cin >> ab)
        nums.push_back(ab);
    sort(all(nums));

    int x = nums[nums.size() - 1];
    int mx = *max_element(all(nums));
    cout << mx << '\n';
    if (mx != nums.size() + 1)
        return false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (x != nums[i])
        {
            auto up = upper_bound(all(nums), nums[i]);
            auto lw = lower_bound(all(nums), nums[i]);
            cout << up - lw << '\n';
            if ((up - lw) > 1)
                return false;
        }
        else
        {
            auto up = upper_bound(all(nums), nums[i]);
            auto lw = lower_bound(all(nums), nums[i]);
            cout << up - lw << '\n';
            if (up - lw == 2)
                return true;
            else
                return false;
        }
    }
    return true;
}
