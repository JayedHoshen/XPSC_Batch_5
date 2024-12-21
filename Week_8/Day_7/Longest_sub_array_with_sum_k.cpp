int lenOfLongestSubarr(vector<int> &arr, int k)
{
    // code here
    int n = arr.size();
    unorder_map<int, int> mp;
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
            ans = i + 1;
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
        if (mp.find(sum - k) != mp.end())
            ans = max(ans, i - mp[sum - k]);
    }
    return ans;
}