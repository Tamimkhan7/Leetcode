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

const int M = 1e6;
const int MAXN = 2 * M + 5;
int32_t main()
{
    MTK;
    int n, lower, upper;
    cin >> n >> lower >> upper;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> freq(MAXN, 0);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int num = nums[i];

        int lo = lower - num;
        int hi = upper - num;

        lo += M;
        hi += M;

        for (int j = lo; j <= hi; j++)
            ans += freq[j];

        freq[num + M]++;
    }

    cout << ans << '\n';
    return 0;
}