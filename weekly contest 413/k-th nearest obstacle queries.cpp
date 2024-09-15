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
    vector<int> ans;
    int n = queries.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < queries[i].size(); j++)
            sum += queries[i] + queries[j];
        ans.push_back(sum);
    }
    return 0;
}