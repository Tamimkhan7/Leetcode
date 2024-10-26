#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s;
    int len = s.size();
    int c = 0;
    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <= len - i; j++)
        {
            ss = s.substr(i, j + 1);
            c++;
            int n, k;
            cin >> n;
            int ar[n];
            for (int i = 1; i <= n; i++)
            {
                cin >> k;
            }
            for (int j = 1; j <= c; j++)
            {

                if (ss[j] == k)
                    cout << j << endl;
            }
        }
    }
}
// mile na pore korbo