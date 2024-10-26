#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> A(N);
    vector<long long> dp(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    dp[0] = max(A[0], 0LL);

    if (N > 1)
    {
        dp[1] = max(dp[0], A[1]);
    }

    for (int i = 2; i < N; i++)
    {
        if (A[i] == -1)
        {
            dp[i] = max(dp[i - 1], dp[i - 2]);
        }
        else
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + A[i]);
        }
    }

    cout << dp[N - 1] << endl;

    return 0;
}
// bujte hobe