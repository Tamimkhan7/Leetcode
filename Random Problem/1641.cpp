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
    int x = 5, sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        if (i > 3)
            x++;
        sum += x;
        v.push_back(sum);
    }
    vector<int> store;
    sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        if (i == 3)
            sum += 5;
        sum += v[i - 1];
        store.push_back(sum);
    }
    vector<int> ans;

    for (int i = 0; i < 50; i++)
    {
        // show(ans[i]), show(store[i]);
        if (i < 2)
            ans.push_back(store[i]);
        else if (i == 2)
        {
            ans.push_back(store[i]);
            x = store[i];
            show(x);
            x *= 2;
            ans.push_back(x);
        }
        else
        {
            x = ans[i];
            x += store[i];
            ans.push_back(x);
        }
    }

    // for (auto x : ans)
    //     cout << x << ' ';
    // cout << '\n';

    return 0;
}