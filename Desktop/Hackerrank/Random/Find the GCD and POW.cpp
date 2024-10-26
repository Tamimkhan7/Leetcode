#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int x,y,z,k,res,l,n;
    if(t<101)
    {
        while(t--)
        {
            cin>>x>>y>>z;
            if(x<y)
            {
                res = (pow(x, z))+(pow(y,z));
                //cout<<res<<endl;
                k = y-x;
                //cout<<k<<endl;
                if(res%k==0)
                {
                    cout<<k<<endl;
                }
                else
                {
                    while(res != k)
                    {
                        if(res>k)
                        {
                            res -= k;
                        }
                        else
                        {
                            k -= res;
                        }
                    }
                    cout<<res<<endl;
                }
            }
        }
    }
}

