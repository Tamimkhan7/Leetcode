#include <bits/stdc++.h>
using namespace std;
void SinglyLinkedListNode(list<int> li)
{
    li.unique();
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
        list<int> li;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            li.push_back(a);
        }
        SinglyLinkedListNode(li);
    }
}