#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s,k,l,w,v,u,x;
    cin>>s>>k;
    int result = s.size();
    int result2 = k.size();
    cout<<result<<" "<<result2<<endl;
    string m = s+k;
    cout<<m<<endl;
    int q = result+result2;
    for (int i=0; i<q; i++)
    {
        w = m[0];
        v = m[q-1];
        u = w+v;
        x = m[q-2];
    }
        cout<<u<<endl;
         cout<<x<<endl;


    return 0;
}
