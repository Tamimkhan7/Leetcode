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
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            zero++;
        else if (x > 0)
            pos++;
        else
            neg++;
    }
    double pos_ans = (double)pos / n;
    double neg_ans = (double)neg / n;
    double zero_ans = (double)zero / n;
    // cout << pos_ans << ' ' << neg_ans << ' ' << zero_ans << '\n';
    cout << fixed << setprecision(6) << pos_ans << '\n';
    cout << fixed << setprecision(6) << neg_ans << '\n';
    cout << fixed << setprecision(6) << zero_ans << '\n';

    return 0;
}