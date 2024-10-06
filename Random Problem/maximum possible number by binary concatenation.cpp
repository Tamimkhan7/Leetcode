#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long


bool cmp(const pair<int, string> &a, const pair<int, string> &b)
{
    if (a.first == b.first) 
        return a.second.size() < b.second.size();
    return a.first > b.first; 
}

int32_t main()
{
    MTK;
    int num;
    cin >> num;
    vector<int> nums(num);
    for (int i = 0; i < num; i++)
        cin >> nums[i];

    vector<pair<int, string>> v;

    for (auto x : nums)
    {
        string ans = "";
        int cnt_set_bit = 0;

        while (x)
        {
            if (x % 2 == 1)
                cnt_set_bit++;
            ans += (x % 2 == 1) ? '1' : '0';
            x /= 2;
        }

        reverse(ans.begin(), ans.end());
        v.push_back({cnt_set_bit, ans});
    }

    sort(v.begin(), v.end(), cmp);

    string res = "";
    for (auto [x, y] : v)
        res += y;

    long long des = stoll(res, nullptr, 2);

    cout << des << '\n';
    return 0;
}
