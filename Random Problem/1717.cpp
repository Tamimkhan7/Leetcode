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
    string ss = s;
    reverse(all(ss));
    show(ss);
    int x, y;
    cin >> x >> y;
    int n = s.size();
    int rem = log(n);
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'a' and s[i + 1] == 'b')
        {
            // show(s);
            // cout << i << '\n';
            ans += x;
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            if (i >= rem)
                i -= (rem + 1);
            else
                i = -1;
        }
        else if (s[i] == 'b' and s[i + 1] == 'a')
        {
            // show(s);
            // cout << i << '\n';
            ans += y;
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            if (i >= rem)
                i -= (rem + 1);
            else
                i = -1;
        }
    }
    int ans2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ss[i] == 'a' and ss[i + 1] == 'b')
        {
            ans2 += x;
            ss.erase(ss.begin() + i);
            ss.erase(ss.begin() + i);
            if (i >= rem)
                i -= (rem + 1);
            else
                i = -1;
        }
        else if (ss[i] == 'b' and ss[i + 1] == 'a')
        {
            ans2 += y;
            ss.erase(ss.begin() + i);
            ss.erase(ss.begin() + i);
            if (i >= rem)
                i -= (rem + 1);
            else
                i = -1;
        }
    }
    cout << ans << ' ' << ans2 << '\n';
    show(s);
    show(ss);
    return 0;
}