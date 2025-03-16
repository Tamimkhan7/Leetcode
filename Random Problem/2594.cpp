#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

bool ok(ll mid, vector<int> &ranks, int cars)
{
    cout << mid << '\n';
    ll cnt = 0;
    for (int r : ranks)
    {
        cnt += sqrt(mid / r);
        if (cnt >= cars)
            return true;
    }
    return cnt >= cars;
}

int32_t main()
{
    MTK;
    int n, cars;
    cin >> n >> cars;
    vector<int> ranks(n);
    for (int i = 0; i < n; i++)
        cin >> ranks[i];

    sort(all(ranks));

    ll l = 1, r = 1e18 + 9, ans = 0;
    cout << r << '\n';
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid, ranks, cars))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
    return 0;
}
