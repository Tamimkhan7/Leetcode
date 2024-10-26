#include <bits/stdc++.h>
using namespace std;
void SinglyLinkedListNode(list<int> li, int m)
{
    li.reverse();
    // list<int>::iterator it;
    // it = li.begin();
    // advance(it, m);
    // list<int> li2;
    // li.insert(it, m);
    // for (auto it : li)
    //     cout << it << endl;
    int c = 0;
    while (li.size() > 0)
    {
        c++;
        if (m == c - 1)
            break;
        li.pop_front();
    }
    cout << li.front() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        list<int> li;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            li.push_back(a);
        }
        int m;
        cin >> m;
        SinglyLinkedListNode(li, m);
    }
}