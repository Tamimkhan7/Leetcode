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
void gradingStudents(int n)
{
    string ss, sss;
    int s;
    while (n--)
    {
        cin >> s;
        int q = s;
        if (s > 37)
        {
            ss = to_string(s);
            reverse(ss.begin(), ss.end());
            sss = ss[0];
            int k = stoi(sss);
            if (k == 3 || k == 8)
            {
                cout << q + 2 << endl;
            }
            else if (k == 4 || k == 9)
            {
                cout << q + 1 << endl;
            }
            else
            {
                cout << q << endl;
            }
        }
        else
        {
            cout << s << endl;
        }
    }
}
int main()
{
    faster;
    int n;
    cin >> n;
    gradingStudents(n);
    return 0;
}
