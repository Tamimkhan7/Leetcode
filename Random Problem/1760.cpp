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
        show(x);
        q.pop();
        int sq = sqrt(x);
        if (1LL * sq * sq == x)
        {
            q.push(sq);
            q.push(x - sq);
        }
        else
        {
            if (x % 2 == 0)
            {
                q.push(x / 2);
                q.push(x / 2);
            }
            else
            {
                q.push(x / 2 + 1);
                q.push(x / 2);
            }
        }
    }
    // while (!q.empty())
    // {
    //     cout << q.top() << ' ';
    //     q.pop();
    // }

    return 0;
}