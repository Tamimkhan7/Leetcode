#include <bits/stdc++.h>
using namespace std;
void SinglyLinkedListNode(list<int> li, int t)
{
    for (int i = 0; i < t; i++)
    {
        cout << li.front() << endl;
        li.pop_front();
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
    SinglyLinkedListNode(li, t);
}