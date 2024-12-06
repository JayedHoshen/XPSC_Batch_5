#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n, k, q; cin >> n >> k >> q;

        vector <ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        ll cnt = 0, mx = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(max(mx, v[i]) <= q) {
                cnt++;
                mx = max(mx, v[i]);
            }
            else {
                if(cnt >= k) {
                    ll tmp1 = cnt-k+1;
                    ll tmp2 = (tmp1*(tmp1+1)) / 2;
                    ans += tmp2;
                }
                cnt = 0, mx = 0;
                if(v[i] <= q) {
                    mx = v[i];
                    cnt = 1;
                }
            }
        }

        if(cnt >= k) {
            ll tmp1 = cnt-k+1;
            ll tmp2 = (tmp1*(tmp1+1)) / 2;
            ans += tmp2;
        }

        cout << ans << '\n';
    }

    return 0;
}