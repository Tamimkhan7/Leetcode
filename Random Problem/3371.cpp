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
    sort(nums.begin(), nums.end());

    if (nums[0] >= 0)
    {
        int sum = 0;
        for (int i = 0; i < n - 3; i++)
            sum += nums[i];
        int x = nums[n - 1];
        int y = nums[n - 2];
        if (x == sum)
            cout << y << '\n';
        else if (y == sum)
            cout << x << '\n';
        else
            cout << sum << '\n';
    }
    else
    {
        reverse(nums.begin(), nums.end());
        for (auto x : nums)
            cout << x << ' ';
        cout << '\n';
        int xp = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                xp = i;
                nums.push_back(nums[i]);
            }
            else
                break;
        }
        show(xp);
        if (xp != -1)
            nums.erase(nums.begin(), nums.begin() + xp + 1);
        for (auto x : nums)
            cout << x << ' ';
        cout << '\n'; 
        int n = nums.size();
        int x = nums[n - 1];
        int y = nums[n - 2];
        int sum = 0;
        for (int i = 0; i < n - 2; i++)
            sum += nums[i];

        // show(sum);
        if (x == sum)
            cout << y << '\n';
        else if (y == sum)
            cout << x << '\n';
        else
            cout << sum << '\n';
    }
    return 0;
}