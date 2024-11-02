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
    vector<int> v;
    // if (n == 1)
    //     return n;
    for (int i = 2; i <= n; i += 2)
        v.push_back(i);

    int k = 1;
    while (v.size() > 1)
    {

        if (k % 2 == 0)
        {
            vector<int> vv;
            for (int i = 1; i < v.size(); i += 2)
            {
                int x = v[i];
                vv.push_back(x);
            }
            sort(vv.begin(), vv.end());
            v.clear();
            v = vv;
        }
        else
        {
            vector<int> vv;
            for (int i = v.size() - 2; i >= 0; i -= 2)
            {
                int x = v[i];
                // cout << x << '\n';
                vv.push_back(x);
            }
            sort(vv.begin(), vv.end());
            // for (auto x : vv)
            //     cout << x << ' ';
            v.clear();
            v = vv;
        }
        k++;
    }
    cout << v[0] << '\n';
    return 0;
}