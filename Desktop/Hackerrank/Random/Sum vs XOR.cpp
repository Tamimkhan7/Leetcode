#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
typedef unsigned long long int llu;
void sumXor(ll n)
{
    ll count = 0;
    for (int i = 0; i <= n; i++)
    {
        ll p = n + i;
        ll ans = n ^ i;
        if (p == ans)
            count++;
    }
    cout << count << endl;
}

int main()
{
    faster;
    ll n;
    cin >> n;
    sumXor(n);
    return 0;
}