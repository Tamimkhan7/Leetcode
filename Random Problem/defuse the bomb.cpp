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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // int n = v.size();
    vector<int> ans;
    if (k > 0)
    {
        vector<int> v(all(v));
        for (auto x : v)
            v.push_back(x);
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i + 1; j <= k + i; j++)
                sum += v[j];
            ans.push_back(sum);
        }
    }
    else if (k < 0)
    {
        vector<int> v(all(v));
        while (!v.empty())
        {
            v.begin(v.back());
            v.pop_back();
        }
        reverse(all(v));
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < abs(k); j++)
                sum += v[j];
            ans.push_back(sum);
        }
        reverse(all(ans));
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    else
    {
        for (int i = 0; i < n; i++)
            ans.push_back(0);
    }
    // return ans;
    return 0;
}