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
    string coordinate1, coordinate2;
    cin >> coordinate1 >> coordinate2;
    int x = coordinate1[0] - 'a';
    int y = int(coordinate1[1] - '0');
    int a = coordinate2[0] - 'a';
    int b = int(coordinate2[1] - '0');
    cout << x << ' ' << y << ' ' << a << ' ' << b << '\n';
    return 0;
}