#include <bits/stdc++.h>
using namespace std;
void solve(int a[], int k, int n)
{
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            ans++;
            break;
        }
    }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
    int main()
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        int k;
        cin>>k;
        solve(a,k,n);
    }
