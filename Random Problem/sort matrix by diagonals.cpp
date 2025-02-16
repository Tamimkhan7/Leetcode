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
    int n = 2, m = 2;
    int grid[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    }

    for (int j = 0; j < m; j++)
    {
        vector<int> diag;
        int x = 0, y = j;

        while (x < n && y < m)
        {
            diag.push_back(grid[x][y]);
            x++, y++;
        }

        sort(diag.rbegin(), diag.rend());

        x = 0, y = j;
        int idx = 0;
        while (x < n && y < m)
        {
            grid[x][y] = diag[idx++];
            x++, y++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        vector<int> diag;
        int x = 0, y = 1;

        while (x < n && y < m)
        {
            diag.push_back(grid[x][y]);
            x++, y++;
        }
        // for (auto x : diag)
        //     cout << x << ' ';
        // cout << '\n';

        sort(diag.begin(), diag.end());

        x = 0, y = 1;
        int idx = 0;
        while (x < n && y < m)
        {
            grid[x][y] = diag[idx++];
            x++, y++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}