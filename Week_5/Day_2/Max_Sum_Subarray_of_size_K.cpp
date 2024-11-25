int maximumSumSubarray(vector<int> &arr, int k)
{
    // code here
    int n = arr.size(), l = 0, r = 0;
    long long int ans = 0, sum = 0;
    while (r < n)
    {
        sum += arr[r];
        if (r - l + 1 == k)
        {
            ans = max(ans, sum);
            sum -= arr[l];
            l++;
        }
        r++;
    }

    return ans;
}