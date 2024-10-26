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
    int n, k, q;
    cin >> n >> k >> q;
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    while (k--)
    {
        int last = d.back();
        d.pop_back();
        d.push_front(last);
    }
    while (q--)
    {
        int pos;
        cin >> pos;
        cout << d[pos] << '\n';
    }
    return 0;
}