#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m),ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

for(auto x: a){
    if(x>0)
        ans.push_back(x);
}
for(auto x: b){
    if(x>0)
        ans.push_back(x);
}
sort(all(ans));
for(auto x: ans)cout<<x<<' ';
cout << '\n';
return 0;
}