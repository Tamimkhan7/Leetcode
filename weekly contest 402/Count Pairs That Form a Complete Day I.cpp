#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    unordered_map<ll, ll> remainder_count;
    ll pair_count = 0;

    for (int hour : a)
    {
        int remainder = hour % 24;
        int complement = (24 - remainder) % 24;

        if (remainder_count.find(complement) != remainder_count.end())
        {
            pair_count += remainder_count[complement];
        }

        remainder_count[remainder]++;
    }

    cout << pair_count << '\n';
    return 0;
}
