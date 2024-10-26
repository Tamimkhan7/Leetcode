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
#define nl '\n'
#define mod 1000000007

void largestPermutation(vector<int> &v, int n, int k)
{
    int maxi = v[0];
    while (k--)
    {
        for (int i = 0; i < n; i++)
        {
            // if (i == 0)
            // {
            if (maxi < v[i])
            {
                maxi = v[i];
            }
            // }
            //     else
            //     {
            //         if (maxi > v[i])
            //         {
            //             maxi = v[i];
            //         }
            //     }
        }
        cout << maxi << endl;
        for (int i = 0; i < n; i++)
        {
            if (maxi == v[i])
            {
                swap(v[i], v[n - 1 - i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    faster;
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    largestPermutation(v, n, k);
}