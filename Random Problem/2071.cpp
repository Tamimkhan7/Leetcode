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
    int n, m, pills, strength;
    cin >> n >> m >> pills >> strength;

    vector<int> tasks(n), workers(m);
    for (int i = 0; i < n; i++)
        cin >> tasks[i];
    for (int i = 0; i < m; i++)
        cin >> workers[i];

    sort(tasks.begin(), tasks.end());
    sort(workers.rbegin(), workers.rend());

    // for (int i = 0; i < m; i++)
    //     cout << workers[i] << " ";
    // cout << '\n';
    // return 0;
    int pill = pills;
    int ans = 0;
    for (int i = 0; i < min((int)tasks.size(), (int)workers.size()); i++)
    {
        if (tasks[i] <= workers[i])
            ans++;
        else if (tasks[i] <= workers[i] + strength and pills > 0)
            ans++, pills--;
    }
    sort(tasks.rbegin(), tasks.rend());
    // for (int i = 0; i < m; i++)
    //     cout << tasks[i] << " ";
    // cout << '\n';
    // return 0;
    int ans2 = 0;
    for (int i = 0; i < min((int)tasks.size(), (int)workers.size()); i++)
    {
        if (tasks[i] <= workers[i])
            ans2++;
        else if (tasks[i] <= workers[i] + strength and pill > 0)
            ans2++, pill--;
    }
    ans = max(ans, ans2);
    show(ans);
    return 0;
}