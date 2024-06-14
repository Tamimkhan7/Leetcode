#include<bits/stdc++.h>
using namespace std;
#define MTK ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b ,sizeof(a))
#define trace(x) cout<<#x<<' '<< x <<endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main() {
    MTK;
string a,b;cin>>a>>b;
string ans;
int cnt=0;
int i = a.size()-1;
int j = b.size()-1;
while(i>=0 || j>=0 || cnt){
    if(i>=0)cnt+= a[i--]-'0';
    if(j>=0)cnt+= b[j--]-'0';
    cout<<cnt<<'\n';
    // ans += cnt%2+'0';
    cnt/=2;
    // cout<<cnt<<'\n';
}
reverse(all(ans));
cout<<ans<<'\n';

    return 0;
}