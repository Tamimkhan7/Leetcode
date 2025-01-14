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
    int low, high;
    cin >> low >> high;
    vector<int> v;
    for (int i = 1; i <= 9; i++)
    {
        int val = i;
        for (int j = i + 1; j <= 9; j++)
        {
            val = val * 10 + j;
            v.push_back(val);
        }
    }
    sort(all(v));
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    return 0;
}