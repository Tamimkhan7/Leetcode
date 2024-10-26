#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
bool canAchieveMaxDistance(vector<long long> &rooms, int C, long long distance)
{
    int count = 1;
    long long currentPos = rooms[0];

    for (int i = 1; i < rooms.size(); i++)
    {
        if (rooms[i] - currentPos >= distance)
        {
            count++;
            currentPos = rooms[i];
        }
    }

    return count >= C;
}
int main()
{
    faster;
    int T;
    cin >> T;

    while (T--)
    {
        int N, C;
        cin >> N;
        vector<long long> rooms(N);

        for (int i = 0; i < N; i++)
        {
            cin >> rooms[i];
        }

        cin >> C;
        sort(rooms.begin(), rooms.end());

        long long left = 0, right = rooms[N - 1] - rooms[0];
        long long maxDistance = 0;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            if (canAchieveMaxDistance(rooms, C, mid))
            {
                maxDistance = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        cout << maxDistance << endl;
    }

    return 0;
}
