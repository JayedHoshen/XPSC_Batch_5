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
        int n; cin >> n;
        vector <ll> v(n), pref(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        string s; cin >> s;

        pref[0] = v[0];
        for(int i = 1; i < n; i++) pref[i] = pref[i-1] + v[i];

        ll r = n-1, l = 0, ans = 0;
        while(l < n) {
            if(s[l] == 'L') {
                while(r > l && s[r] != 'R') r--;
                if(r > l) {
                    ans += pref[r] - (l>0 ? pref[l-1] : 0);
                    r--;
                }
            }
            l++;
        }
        cout << ans << '\n';
    }

    return 0;
}