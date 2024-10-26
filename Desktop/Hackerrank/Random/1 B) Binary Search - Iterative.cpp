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
int binary(int arr[], int n, int t, int pos)
{

    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == pos)
        {
            return mid;
        }
        else if (arr[mid] > pos)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    faster;
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        int pos;
        cin >> pos;
        int result = binary(arr, n, t, pos);
        if (result == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
