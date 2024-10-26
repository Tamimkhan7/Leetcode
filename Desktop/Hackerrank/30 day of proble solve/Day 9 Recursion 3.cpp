#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return n;
    }
    else if (n == 1)
    {
        return n;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    long long int n;
    cin >> n;
    cout << factorial(n) << endl;
}