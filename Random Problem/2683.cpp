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
    vector<int> derived(n);
    for (int i = 0; i < n; i++)
        cin >> derived[i];
    vector<int> ans, res;
    // int n = derived.size();
    for (int i = 0; i < n; i++)
    {
        if (n - 1 != i)
        {
            if (derived[i] == 1 and derived[i + 1] == 1)
                ans.push_back(0);
            else
                ans.push_back(1);
        }
        else
        {
            if (derived[n - 1] == 1 and ans[0] == 1 || derived[n - 1] == 0 and ans[0] == 0)
                ans.push_back(0);
            else
                ans.push_back(1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (n - 1 != i)
        {
            int x = ans[i] ^ ans[i + 1];
            res.push_back(x);
        }
        else
        {
            int x = ans[i] ^ ans[0];
            res.push_back(x);
        }
    }
    for (auto x : res)
        cout << x << ' ';
    cout << "\n";
    if (res == derived)
        cout << "true" << '\n';
    else
        cout << "False" << '\n';
    return 0;
}