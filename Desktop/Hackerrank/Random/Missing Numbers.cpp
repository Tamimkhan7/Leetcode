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
void missingNumbers(int arr[], int arr2[], int n, int m)
{
    sort(arr, arr + n);
    sort(arr2, arr2 + m);
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j <= i; j++)
        {
            if (arr[j] != arr2[i])
            {
                cout << arr2[i] << " ";
            }
            else
            {
                continue;
            }
        }
    }
    cout << endl;
}
int main()
{
    faster;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    missingNumbers(arr, arr2, n, m);
}