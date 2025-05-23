class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        vector<int> diff(n + 1, 0);

        for (const auto &query : queries)
        {
            int x = query[0];
            int y = query[1];
            diff[x] -= 1;
            if (y + 1 < n)
                diff[y + 1] += 1;
        }
        int delta = 0;
        for (int i = 0; i < n; i++)
        {
            delta += diff[i];
            nums[i] += delta;
            if (nums[i] > 0)
                return false;
        }

        return true;
    }
};