#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    int n;
    cin >> n;
    int arr[n], a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (maxi < arr[i])
            {
                maxi = arr[i];
            }
        }
        else
        {
            if (maxi > arr[i])
            {
                maxi = arr[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (mini > arr[i])
            {
                mini = arr[i];
            }
        }
        else
        {
            if (mini < arr[i])
            {
                mini = arr[i];
            }
        }
    }
    cout << maxi << " " << mini << endl;
    if()
    int k = maxi + maxi;
    int p = mini + mini;
    if (k && p > 0)
    {
        cout << abs(maxi * maxi) << " " << abs(mini * mini) << " " << k << " " << p << endl;
    }
    else
    {
        cout << abs(maxi * maxi) << " " << abs(mini * mini) << " " << p << " " << k << endl;
    }
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}