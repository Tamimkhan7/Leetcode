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

bool canPlace(int n, int maxsum, int k, int val)
{
    int minSum = n;
    int remainingSum = maxsum - minSum;
    int sum = val;

    for (int i = 0; i < k; ++i)
    {
        int leftVal = val - (k - i);
        if (leftVal > 0)
            sum += leftVal;
    }

    for (int i = k; i < n - 1; ++i)
    {
        int rightVal = val - (i - k);
        if (rightVal > 0)
        {
            sum += rightVal;
        }
    }

    return sum <= maxsum;
}

int maxIntegerAtIndex(int n, int maxsum, int k)
{
    int left = 0;
    int right = maxsum - 1;
    int result = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (canPlace(n, maxsum, k, mid))
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}

int main()
{
    MTK;
    int a, b, c;
    cin >> a >> b >> c;

    int maxVal = maxIntegerAtIndex(a, b, c);
    cout << maxVal << endl;

    return 0;
}
