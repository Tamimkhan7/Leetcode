#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    v.insert(v.begin(), 0);
    vector<int> pre(n), suff(n);
    pre[0] = 0;
    suff[0] = 0;
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + v[i];
    v.erase(v.begin());
    v.push_back(0);
    reverse(v.begin(), v.end());
    for (int i = 1; i < n; i++)
        suff[i] = suff[i - 1] + v[i];
    reverse(suff.begin(), suff.end());
    // for (auto x : suff)
    //     cout << x << ' ';
    // cout << '\n';
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x = abs(suff[i] - pre[i]);
        ans.push_back(x);
    }
    return 0;
}