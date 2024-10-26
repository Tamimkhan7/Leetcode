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
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
            cout << ' ';
        for (int j = 0; j <= i; j++)
            cout << "#";
        cout << '\n';
    }
    return 0;
}