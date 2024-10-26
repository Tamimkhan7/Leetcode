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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ss, pat;
        cin >> pat;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len - i; j++)
            {
                ss = s.substr(i, j + 1);
            }
            if (ss == pat)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (ss == pat)
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}