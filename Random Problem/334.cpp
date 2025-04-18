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

    // int n = nums.size();
    int i = 0, j = n / 2, k = nums.size() - 1;
    bool ok = false;
    unordered_map<int, int> mp, mp2;
    for (int i = 0; i < j; i++)
        mp[nums[i]]++;
    for (int i = j + 1; i < n; i++)
        mp2[nums[i]]++;
    int x = nums[i], y = nums[j], z = nums[k];

    while (k < n and i < j and j < k)
    {
        // cout << 1 << '\n';
        if (x < y and y < z)
        {
            ok = true;
            break;
        }
        while (j > 1)
        {
            int p = nums[j];
            for (auto [a, b] : mp)
            {
                if (x > a)
                    x = a;
            }
            if (x < p)
                y = p;
            mp[p]--, mp2[p]++;
            j--;
        }
        // show(x), show(y), show(z);
        // cout << '\n';
        // show(i), show(j), show(k);
        bool flag = false;
        while ((n - 1) > k and k > j)
        {
            int p = nums[j];
            for (auto [a, b] : mp2)
            {
                if (a > y)
                {
                    z = a;
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
            if (x < p and p < y)
                y = p;
            mp2[p]--;
            j++;
        }
        if (x < y and y < z)
        {
            ok = true;
            break;
        }
    }
    show(ok);
    return 0;
}
/*#include <bits/stdc++.h>
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

    // int n = nums.size();
    int i = 0, j = n / 2, k = nums.size() - 1;
    bool ok = false;
    unordered_map<int, int> mp, mp2;
    for (int i = 0; i < j; i++)
        mp[nums[i]]++;
    for (int i = j + 1; i < n; i++)
        mp2[nums[i]]++;
    int x = nums[i], y = nums[j], z = nums[k];

    while (k < n and i < j and j < k)
    {
        // cout << 1 << '\n';
        if (x < y and y < z)
        {
            ok = true;
            break;
        }
        while (j > 1)
        {
            int p = nums[j];
            auto it = mp.lower_bound(x);
            it--;
            auto a = (*it).first;
            if (x > a)
                x = a;

            if (x < p)
                y = p;
            mp[p]--, mp2[p]++;
            j--;
        }

        bool flag = false;
        while ((n - 1) > k and k > j)
        {
            int p = nums[j];
            auto it = mp2.upper_bound(y);
            auto a = (*it).first;

            if (a > y)
            {
                z = a;
                flag = true;
                break;
            }

            if (flag)
                break;
            if (x < p and p < y)
                y = p;
            mp2[p]--;
            j++;
        }
        if (x < y and y < z)
        {
            ok = true;
            break;
        }
    }
    show(ok);
    return 0;
}*/