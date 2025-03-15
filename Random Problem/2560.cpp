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
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> v(nums.begin(), nums.end());

    sort(v.begin(), v.end());

    auto first_lw =
        lower_bound(nums.begin(), nums.end(), v[0]) - nums.begin();
    // auto second_lw =
    //     lower_bound(nums.rbegin(), nums.rend(), v[1]) - nums.rbegin();
    auto second_lw2 =
        lower_bound(nums.begin(), nums.end(), v[1]) - nums.begin();
    show(first_lw), show(second_lw2);
    // if (abs(second_lw2 - first_lw) > 1)
    //     return v[1];
    // else
    //     return v[2];
    return 0;
}