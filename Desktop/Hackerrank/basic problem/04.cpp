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

int main()
{
    int n, q, p, k;
    cin >> n >> q;
    cin >> k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    cin >> p;
    int arr2[p];
    for (int i = 0; i < p; i++)
    {
        cin >> arr2[i];
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = a[0];
    for (int i = 0; i < n; i++)
    {
        if (c < a[i])
        {
            c = a[i];
        }
    }
    // cout << c << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[c] << endl;
        break;
    }
    int y[q], u;
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
    }
    int maxi = y[0];
    for (int i = 0; i < q; i++)
    {
        if (maxi < y[i])
        {
            maxi = y[i];
        }
    }
    for (int i = 0; i < p; i++)
    {
        cout << arr2[maxi] << endl;
        break;
    }
}
