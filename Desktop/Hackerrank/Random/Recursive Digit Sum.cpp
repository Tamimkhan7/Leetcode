#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
void summation(int sum, int n)
{
    string p, pp;
    p = to_string(sum);
    n -= 1;
    while (n--)
    {
        int c, len, i;
        c = 0;
        len = p.size();
        for (i = 0; i < len; i++)
        {
            pp = p[i];
            c += stoi(pp);
        }
        p = to_string(c); 
    }
    cout << p << endl;
}
void solve()
{
    string ss, k, s;
    int n, y, sum = 0;
    cin >> s >> n;
    y = n;
    while (n--)
    {
        ss += s;
    }
    for (int i = 0; i < ss.size(); i++)
    {
        k = ss[i];
        sum += stoi(k);
    }
    summation(sum, y);
}
int main()
{
    faster;
    solve();
}