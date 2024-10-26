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
    faster;
    int n;
    cin >> n;
    string s[n];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
