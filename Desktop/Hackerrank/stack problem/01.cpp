#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    faster;
    int n, x;
    stack<int> st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
    }
    st.pop();
    st.pop();
    cout << st.top() << endl;
    int maxi = INT_MIN;
    while (st.size() > 0)
    {

        int c = st.top();
        maxi = max(maxi, c);
        st.pop();
    }

    cout << maxi << endl;
}