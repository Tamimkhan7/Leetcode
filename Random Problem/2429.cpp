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
    int num1, num2;
    cin >> num1 >> num2;
    int setBits = __builtin_popcount(num2);
    int x = 0;
    for (int i = 31; i >= 0 && setBits; i--)
    {
        if ((num1 & (1 << i)))
        {
            x = (x | (1 << i));
            setBits--;
        }
    }
    cout << x << '\n';

    for (int i = 0; i < 32 && setBits; i++)
    {
        if (!(x & (1 << i)))
        {
            x = (x | (1 << i));
            setBits--;
        }
    }
    cout << x << '\n';
}