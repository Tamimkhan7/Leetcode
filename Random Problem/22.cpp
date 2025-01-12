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
    vector<string> ans;
    string s = "";
    for (int i = 0; i < n; i++)
        s += '(';
    for (int i = 0; i < n; i++)
        s += ')';
    ans.push_back(s);
    do
    {
        // show(s);
        int opencnt = 0;
        bool ok = true;
        for (int i = 0; i < n * 2; i++)
        {
            if (s[i] == '(')
                opencnt++;
            else if (opencnt > 0)
                opencnt--;
            else
            {
                ok = false;
                break;
            }
        }
        int closecnt = 0;
        for (int i = (n * 2) - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                closecnt++;
            else if (closecnt > 0)
                closecnt--;
            else
            {
                ok = false;
                break;
            }
        }
        if (ok && (find(all(ans), s) == ans.end()))
            ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
}