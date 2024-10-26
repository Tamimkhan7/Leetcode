#include <bits/stdc++.h>
using namespace std;
void oddNumbers(int n, int k)
{
    for (int i = n; i <= k; i++)
    {
        if (i % 2 != 0)
            cout << i << endl;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    oddNumbers(n, k);
}