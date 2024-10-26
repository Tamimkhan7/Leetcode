#include <bits/stdc++.h>
using namespace std;
void SinglyLinkedListNode(list<int> li, list<int> li2)
{
    li.merge(li2);
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
    while (t--)
    {
        int n;
        cin >> n;
        list<int> li, li2;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            li.push_back(a);
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int b;
            cin >> b;
            li2.push_back(b);
        }
        SinglyLinkedListNode(li, li2);
    }
}