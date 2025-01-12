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
    string s, locked;
    cin >> s >> locked;
    int n = s.size();
    if (n == 1)
        cout << "false\n";
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '(' and s[i + 1] == ')')
        {
            s.erase(s.begin() + i), s.erase(s.begin() + i);
            locked.erase(locked.begin() + i),
                locked.erase(locked.begin() + i);
            i = 0;
        }
        else if ((locked[i] == '0' || locked[i + 1] == '0'))
        {
            s.erase(s.begin() + i), s.erase(s.begin() + i);
            locked.erase(locked.begin() + i),
                locked.erase(locked.begin() + i);
            i = 0;
        }
    }

    bool ok = true;
    // for (int i = 0; i < (int)s.size() - 1; i++)
    // {
    //     if ((s[i] == '(' and s[i + 1] == ')'))
    //     {
    //         s.erase(s.begin() + i), s.erase(s.begin() + i);
    //         locked.erase(locked.begin() + i),
    //             locked.erase(locked.begin() + i);
    //     }
    //     else if (((s[i] == ')' and s[i + 1] == ')') ||
    //               (s[i] == '(' and s[i + 1] == '(') ||
    //               (s[i] == ')' and s[i + 1] == '(')) and
    //              (locked[i] == '0' || locked[i + 1] == '0'))
    //     {
    //         s.erase(s.begin() + i), s.erase(s.begin() + i);
    //         locked.erase(locked.begin() + i),
    //             locked.erase(locked.begin() + i);
    //     }
    //     else
    //     {
    //         ok = false;
    //         break;
    //     }
    // }
    show(s), show(locked);
    if (ok || s.empty())
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}