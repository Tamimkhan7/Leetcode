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
    int x, y;
    vector<int> h;
    while (cin >> x)
        h.push_back(x);
    vector<vector<int>> q;
    while (cin >> x >> y)
        q.push_back({x, y});
    int n = q.size();
    vector<int> ans(n, -1);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({max(q[i][0], q[i][1]), i});
    sort(all(v));

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int j = 0;
    for (int i = 0; i < (int)h.size(); i++)
    {
        while (j < n and v[j].first <= i)
        {
            int idx = v[j].second;

            if (h[max(q[idx][0], q[idx][1])] > h[min(q[idx][0], q[idx][1])])
                ans[idx] = i;
            else if (q[idx][0] == q[idx][1])
                ans[idx] = i;
            else
                pq.push({max(h[q[idx][0]], h[q[idx][1]]), idx});
            j++;
        }
        while (!pq.empty() and pq.top().first < h[i])
        {
            ans[pq.top().second] = i;
            pq.top();
        }
    }

    return 0;
}