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
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n;
        int arr[n], c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            p = arr[i];
            for (int i = 2; i < p; i++)
            {
                if (p % i == 0)
                {
                    c++;
                    break;
                }
            }
        }

        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                k++;
                break;
            }
        }
        if (c != 0 || k != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}