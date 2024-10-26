#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

void summation(ll a, ll b)
{
    cout << a + b << endl;
    cout << abs(a - b) << endl;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    summation(a, b);
}
