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
    vector<int> a;
    int x;
    while (cin >> x)
        a.push_back(x);
    vector<pair<int, int>> v;
    for (int i = 0; i < a.size(); i++)    
        v.push_back(make_pair(a[i], i));
   
    sort(all(v));
    for (auto [x, y] : v)
        cout << x << ' ' << y << '\n';
    return 0;
}