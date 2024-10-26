#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, n, k;
    cin >> p;
    queue<int> q;
    while (p--)
    {
        cin >> n;
        if (n == 1)
        {
            cin >> k;
            q.push(k);
        }
    }
    q.pop();
    cout << q.front() << endl;
    while (q.size() > 0)
    {
        cout << q.front() << endl;
        q.pop();
        break;
    }
}