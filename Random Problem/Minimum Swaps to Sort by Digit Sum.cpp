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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x = nums[i];
        int sum = 0;
        while (x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        mp[nums[i]] = sum;
    }

    vector<pair<int, int>> v;
    for (auto [x, y] : mp)
        v.push_back({x, y});

    sort(v.begin(), v.end(), cmp);

    for (auto [x, y] : v)
    {
        cout << x << ' ' << y << '\n';
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != v[i].first)
            ans++;
    }

    show(ans);
    show(ans / 2);
    return 0;
}