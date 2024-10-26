#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            arr[i] = (b - a);
        }
        else
        {
            arr[i] = 0;
        }
    }
    int maxi = arr[0];
    for (i = 0; i < n; i++)
    {
        if (maxi < arr[i])
            maxi = arr[i];
    }
    if (maxi)
    {
        for (i = 1; i <= n; i++)
        {
            cout << i << endl;
            break;
        }
    }
}