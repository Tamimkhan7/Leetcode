#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,k,l,w,o;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        q = x/2;//x
        o = pow(q,2);//x
        k = o*3.1416;//x
        cout<<k<<endl;
        w = pow(y,2);//y
        l = 3.1416*w;//y
        cout<<l<<endl;
        if(l>=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
