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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (k--)
    {
        int a;
        cin >> a;
        int l = 0, r = n - 1, c = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == a)
            {
                c++;
                break;
            }
            else if (arr[mid] > a)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (c != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
