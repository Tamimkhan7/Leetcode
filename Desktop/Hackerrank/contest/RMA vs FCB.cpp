#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define pb push_back()
#define pop pop_back()
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int maxi = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (maxi % a[i] == 0)
                flag++;
            else
            {
                i = -1;
                maxi *= 2;
            }
        }
        cout << maxi << '\n';
    }
}