#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, c, k;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 1; i <= m; i++)
    {
        int c = 0;
        cin >> a >> b;
        string ss, s2;
        for (int j = a; j <= b; j++)
        {
            ss[j] = s[j];
            s2 += ss[j];
            c++;
            string sp;
            for (int i = 0; i < c; i++)
            {
                int k = 0;
                for (int j = 0; j < c - i; j++)
                {

                    sp = s2.substr(i, j + 1);
                    k++;
                    //  cout << sp << " ";
                }
                cout << k << endl;
            }
        }
    }
}
