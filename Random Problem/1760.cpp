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
    int n, mx;
    cin >> n >> mx;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    priority_queue<int> q;
    for (auto x : v)
        q.push(x);

    while (mx--)
    {
        int x = q.top();
        q.pop();
        bool ok = false;
        for (int i = x / 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                int y = x - i;
                q.push(y);
                q.push(i);
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            if (x % 2 == 0)
            {
                q.push(x / 2);
                q.push(x / 2);
            }
            else
            {
                q.push(x / 2);
                q.push(x / 2 + 1);
            }
        }
    }
    while (!q.empty())
    {
        cout << q.top() << ' ';
        q.pop();
    }

    return 0;
}