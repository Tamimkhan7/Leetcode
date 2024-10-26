#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> p(n + 1);
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        mp[p[i]] = i;
    }

    for (int x = 1; x <= n; x++)
    {
        int pos = mp[x];
        int ans = mp[pos];
        cout << ans << '\n';
    }

    return 0;
}
