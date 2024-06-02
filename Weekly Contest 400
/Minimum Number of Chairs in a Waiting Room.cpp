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
string s;cin>>s;
int cchair=0, ans=0;
for(auto c:s){
    if(c=='E'){
        cchair++;
        ans = max(cchair, ans);
    }
    else if(c=='L')cchair--;
    }
    cout<<ans<<'\n';
    return 0;
}