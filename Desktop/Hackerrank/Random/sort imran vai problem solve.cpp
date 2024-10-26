#include "bits/stdc++.h"
using namespace std;

// #define int long long
#define endl "\n"
#define Faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define len(a) sizeof(a) / sizeof(int)
#define all(x) (x).begin(), (x).end()

bool com(pair<int, string> &a, pair<int, string> &b)
{

    if (a.first != b.first)
        return a.first > b.first;
    else
        return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, string>> score(n);

    for (int i = 0; i < n; i++)
    {
        cin >> score[i].second >> score[i].first;
    }

    sort(all(score), com);

    for (auto val : score)
        cout << val.second << " " << val.first << endl;
}

int32_t main()
{
    Faster;
    solve();
    return 0;
}