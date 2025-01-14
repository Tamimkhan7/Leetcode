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

    if (n == 1)
    {
        cout << "True" << '\n';
        return 0;
    }

    string s = to_string(n);
    sort(s.begin(), s.end());

    do
    {
        int int_val = stoi(s);
        int x = int_val, cnt = 0;
        while (x % 2 == 0)
        {
            if (x % 2 == 0)
                cnt++, x /= 2;
            else
                break;
        }
        cout << int_val << ' ' << cnt << '\n';
        if (cnt > 0 and pow(2, cnt) == int_val)
        {
            cout << "True" << '\n';
            return 0;
        }

    } while (next_permutation(s.begin(), s.end()));

    cout << "False" << '\n';
    return 0;
}