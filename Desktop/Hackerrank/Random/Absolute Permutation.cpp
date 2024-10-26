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
void permutation(vector<int> &v, int n, int k)
{
    int c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == (v.size() - 1))
        {
            break;
        }
        else
        {
            int m = abs(v[i] - v[i + 1]);//1 2 3//1 1
            if (m >= k)
            {
                c++;
            }
        }
    }
    if (c == n - 1)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }
    cout << endl;
}
void absolutePermutation()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);//3 1 2 3
    }
    while (next_permutation(v.begin(), v.end()))
    {
        permutation(v, n, k);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        absolutePermutation();
    }
}