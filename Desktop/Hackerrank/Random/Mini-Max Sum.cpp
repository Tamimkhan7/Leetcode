#include <bits/stdc++.h>
using namespace std;
void miniMaxSum()
{
    long long int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    long long int mini = 0, maxi = 0;
    sort(arr, arr + 5);
    for (int i = 1; i < 5; i++)
        maxi += arr[i];
    for (int i = 0; i < 4; i++)
        mini += arr[i];

    cout << mini << " " << maxi << endl;
}
int main()
{

    miniMaxSum();
}