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
    int a, b, c;
    cin >> a >> b >> c;

    vector<pair<int, char>> v;
    v.push_back({a, 'a'});
    v.push_back({b, 'b'});
    v.push_back({c, 'c'});
    sort(v.begin(), v.end(), [](pair<int, char> &a, pair<int, char> &b)
         { return a.first > b.first; });

    // for (auto [x, y] : v)
    //     cout << x << ' ' << y << '\n';
    auto [x, y] = v[0];
    auto [x1, y1] = v[1];
    auto [x2, y2] = v[2];
    // cout << x1 << ' ' << y1 << '\n';
    string s = "";
    while ((x > 0 and x1 > 0) || (x1 > 0 and x2 > 0) || (x > 0 and x2 > 0))
    {
        int cnt = 0;
        bool ok = false;
        while (x and !ok)
        {
            if (x == 1)
                ok = true;
            s += y;
            x--, cnt++;
            if (cnt == 2)
                break;
        }
        cnt = 0;
        while (x1 and !ok)
        {
            if (x1 == 1)
                ok = true;
            s += y1;
            x1--, cnt++;
            if (cnt == 2)
                break;
        }
        cnt = 0;
        while (x2 and !ok)
        {
            if (x2 == 1)
                ok = true;
            s += y2;
            x2--, cnt++;
            if (cnt == 2)
                break;
        }
    }

    if (x > 0)
    {
        int cnt = 0;
        while (x)
        {
            if (cnt == 2)
                break;
            s += y;
            x--;
            cnt++;
        }
    }
    if (x1 > 0)
    {
        int cnt = 0;
        while (x1)
        {
            if (cnt == 2)
                break;
            s += y1;
            x1--;
            cnt++;
        }
    }
    if (x2 > 0)
    {
        int cnt = 0;
        while (x2)
        {
            if (cnt == 2)
                break;
            s += y2;
            x2--;
            cnt++;
        }
    }
    cout << s << '\n';
    return 0;
}