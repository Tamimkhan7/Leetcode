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
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    int vis[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            vis[i][j] = false;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0 and !vis[i][j])
            {
                // cout << i << ' ' << j << ' ' << matrix[i][j] << '\n';
                vis[i][j] = true;
                for (int k = 0; k < m; k++)
                {
                    if (!vis[i][k] and matrix[i][k] != 0)
                    {
                        matrix[i][k] = 0;
                        vis[i][k] = true;
                    }
                }
                for (int k = 0; k < n; k++)
                {
                    if (!vis[k][j] and matrix[k][j] != 0)
                    {
                        matrix[k][j] = 0;
                        vis[k][j] = true;
                    }
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    cout << matrix[i][j] << ' ';
                cout << "\n";
            }
            cout << '\n';

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    cout << vis[i][j] << ' ';
                cout << "\n";
            }
            cout << '\n';
        }
    }

    return 0;
}