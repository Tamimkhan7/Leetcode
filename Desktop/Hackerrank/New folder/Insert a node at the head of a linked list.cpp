#include <bits/stdc++.h>
using namespace std;
void insertNodeAtHead(list<int> li, int t)
{
    for (int i = 0; i < t; i++)
    {
        cout << li.back() << endl;
        li.pop_back();
    }
}
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
    insertNodeAtHead(li, t);
}