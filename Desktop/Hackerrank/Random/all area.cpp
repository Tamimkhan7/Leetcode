#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int volume = (4/3)*(3.1416)*(r*r*r);
    cout<<volume<<endl;
    int surface_area = 4*3.1416*r*r;
    cout<<surface_area<<endl;
    int Circumference = 2*r*3.1416;
    cout<<Circumference<<endl;

    return 0;
}
