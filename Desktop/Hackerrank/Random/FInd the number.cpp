#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k, c = 0;
    cin >> k;
    for (int i = 0; i < n; i++)
        if (arr[i] == k)
            c++;

    if (c != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}