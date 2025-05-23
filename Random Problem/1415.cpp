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
    int n, k;
    cin >> n >> k;
    string s = "abcabcabcabcabcab";
    set<string> se;

    for (int i = 0; i < (1 << 17); i++)
    {
        string ss = "";
        for (int j = 0; j < 17; j++)
        {
            if ((i >> j) & 1)
                ss += s[j];
        }
        se.insert(ss);
    }

    vector<string> v;
    for (auto x : se)
    {
        if (x.size() == n)
        {
            bool ok = true;
            for (int i = 0; i < x.size() - 1; i++)
            {
                if (x[i] == x[i + 1])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                v.push_back(x);
        }
    }

    cout << ((int)v.size() < k ? "" : v[k - 1]) << '\n';
    return 0;
}