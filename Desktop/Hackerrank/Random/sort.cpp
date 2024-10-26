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
    int arr[n];
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                swap(s[i], s[j]);
            }
            else if (arr[i] == arr[j])
            {
                if (s[i] < s[j])
                {
                    swap(s[i], s[j]);
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " " << arr[i] << endl;
    }
}