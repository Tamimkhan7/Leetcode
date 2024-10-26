#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    list<int> li;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        li.push_back(a);
    }
    for (auto it : li)
    {
        cout << it << " ";
    }
    // for (int i = 0; i < t; i++)
    // {
    //     cout << li.front() << " ";
    //     li.pop_front();
    // }
    cout << endl;
}