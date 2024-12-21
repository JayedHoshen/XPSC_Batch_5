#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n; cin >> n;
    long long int k; cin >> k;

    vector <long long int> a(n);
    for(long long int i = 0; i < n; i++) cin >> a[i];

    long long int l = 0, r = 0, ans = n+1;
    long long int sum = 0;
    while(r < n) {
        sum += a[r];
        while((sum-a[l]) >= k) {
            sum -= a[l];
            l++;
        }
        if(sum >= k) ans = min(ans, r-l+1);
        r++;
    }

    if(ans > n) cout << -1 << '\n';
    else cout << ans << '\n';

    return 0;
}