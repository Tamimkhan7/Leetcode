

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int ans = 0;
    // int n = nums.size();
    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (nums[i] == nums[j])
    //             ans++;
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        string x = to_string(nums[i]);
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            string s = to_string(nums[j]);
            string ss = s;
            int m = s.size();
            while (s.front() == '0')
                s.erase(s.begin());
            if (x == s)
            {
                ans++;
                continue;
            }
            for (int k = 0; k < m - 1; k++)
            {
                swap(s[k], s[k + 1]);
                while (s.front() == '0')
                    s.erase(s.begin());
                if (x == s)
                {
                    ans++;
                    flag = true;
                    break;
                }

                // cout << x << ' ' << s << '\n';
                s = ss;
            }
            s = ss;
            if (flag)
                break;
        }
    }
    cout << ans << '\n';
    return 0;
}