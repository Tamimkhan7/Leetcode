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
    int num;
    cin >> num;
    string s = to_string(num);
    sort(s.begin(), s.end());
    int ans = 0;
    string x, y;

    x += (s[0]);
    x += (s[2]);
    y += (s[1]);
    y += (s[3]);
    ans += stoi(x);
    ans += stoi(y);
    // cout << x << ' ' << y << '\n';
    // ans = x + y;
    cout << ans << '\n';
}