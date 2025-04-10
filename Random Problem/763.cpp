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
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (auto c : s)
        mp[c]++;

    vector<pair<char, int>> first, last;
    vector<bool> vis(26, false);
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (!vis[s[i]])
        {
            first.push_back({s[i], i});
            vis[s[i]] = true;
            for (int j = n - 1; j >= 0; j--)
            {
                if (s[i] == s[j])
                {
                    last.push_back({s[j], j});
                    break;
                }
            }
        }
    }
    for (auto [x, y] : last)
        cout << x << ' ' << y << '\n';

    vector<int> ans;
    int l = 0, r = 0;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if ((r > i and ok) || (r == l and !ok))
        {
            for (int j = 0; j < (int)last.size(); j++)
            {
                ok = true;
                if (s[i] == last[j].first and r <= last[j].second)
                {
                    r = last[j].second;
                }
            }
        }
        else
        {

            // show(r);
            // if (l == 0)
            //     ans.push_back(r - l + 1);
            // else
            ans.push_back(r - l);

            l = r;
            ok = false;
            show(l);
            // i--;
        }
    }

    if (r > l)
        ans.push_back(r - l);
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
    return 0;
}