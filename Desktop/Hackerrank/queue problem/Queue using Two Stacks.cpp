#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int p;
            cin >> p;
            q.push(p);
        }
        else if (a == 2)
        {
            q.pop();
        }
        else
        {
            cout << q.front() << endl;
        }
    }
}