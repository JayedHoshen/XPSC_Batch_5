#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long k; cin >> k;

    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    long long ans = 0, sum = 0;
    int l = 0, r = 0;
    while(r < n) {
        sum += a[r];
        if(sum <= k) ans += (r-l+1);
        else {
            while(sum > k && l <= r) {
                sum -= a[l];
                l++;
            }
            if(sum <= k) ans += (r-l+1);
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}