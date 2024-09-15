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
    int n;
    cin >> n;
    bool alic = false, bob = false;
    while (1)
    {
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                if (alic == false)
                {
                    alic = true;
                    bob = false;
                }
                else
                {
                    bob = true;
                    alic = false;
                }
                flag = true;
                n = n - i;
                break;
            }
        }
        cout << n << '\n';
        if (!flag)
            break;
    }
    if (alic)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
    return 0;
}