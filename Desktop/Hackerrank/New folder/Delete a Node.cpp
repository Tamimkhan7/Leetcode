#include <bits/stdc++.h>
using namespace std;
void SinglyLinkedListNode(list<int> li, int t, int del)
{
    list<int>::iterator it;
    it = li.begin();
    advance(it, del);
    li.erase(it);
    for (auto it : li)
    {
        cout << it << " ";
    }
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
    int del;
    cin >> del;
    SinglyLinkedListNode(li, t, del);
}