#include <bits/stdc++.h>
using namespace std;
void insertNodeAtPosition(list<int> li, int t, int c, int d)
{
    list<int>::iterator it;
    it = li.begin();
    advance(it, d);
    li.insert(it, c);
    for (auto it : li)
        cout << it << " ";
    cout << endl;
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
    int value, position;
    cin >> value >> position;
    insertNodeAtPosition(li, t, value, position);
}