class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        long long ans = 0;
        int mx = *max_element(nums.begin(), nums.end());
        int n = nums.size();
        int cnt = 0, l = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == mx)
                cnt++;

            while (cnt >= k)
            {
                ans += n - i;
                if (nums[l] == mx)
                    cnt--;
                l++;
            }
        }
        return ans;
    }
};
