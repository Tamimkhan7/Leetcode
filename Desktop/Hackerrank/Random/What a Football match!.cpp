#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
            b +=96;
            cout<<"Unmarried-"<<(char)b<<endl;
        }
        if(a==2)
        {
            b += 64;
            cout<<"Married-"<<(char)b<<endl;
        }
    }
}
