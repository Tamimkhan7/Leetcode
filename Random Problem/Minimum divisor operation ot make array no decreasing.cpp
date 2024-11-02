#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

const int N = 1001;

vector<int> prime(N);

void sieve()
{
    for (int i = 2; i < N; i++)
        prime[i] = i;
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j < N; j += i)
            {
                if (prime[j] == j)
                    prime[j] = i;
            }
        }
    }
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];    

    if (is_sorted(all(v)))
    {
        cout << 0 << '\n';
        return 0;
    }

    sieve();

    int e = 0;
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        if (x > 1 && prime[x] < x)
        {
            v[i] = prime[x];
            e++;
        }
        if (is_sorted(all(v)))
        {
            cout << e << '\n';
            return 0;
        }
    }

    if (is_sorted(all(v)))
        cout << e << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
