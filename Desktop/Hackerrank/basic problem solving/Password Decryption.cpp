#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    string num = "";
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '1' and s[i] <= '9')
            num += s[i];
        else
        {
            flag = i;
            break;
        }
    }
    for (int i = flag; i < n; i++)
    {
        if ((s[i] >= 'A' and s[i] <= 'Z') and (s[i + 1] >= 'a' and s[i + 1] <= 'z'))
        {
            swap(s[i], s[i + 1]);
            ans += s[i];
            ans += s[i + 1];
            i += 2;
        }
        else if (s[i] == '0')
        {
            char x = num.back();
            num.pop_back();
            ans += x;
        }
        else
            ans += s[i];
    }
    cout << ans << '\n';
    return 0;
}
