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
    int k;
    cin >> k;
    string s = "a", ss;
    while (s.size() <= k)
    {
        if (!ss.empty())
        {
            s = ss;
            ss.clear();
        }

        string temp; // Temporary string to collect new characters
        for (auto x : s)
            temp.push_back(char(x - 'a' + 1 + 'a' - 1)); // Correct character transformation

        ss = temp; // Assign temp to ss after the loop
    }
    cout << ss << '\n'; // Print ss which holds the correct string
    return 0;
}
