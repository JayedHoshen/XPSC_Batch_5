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
        string s; cin >> s;

        vector <ll> v;
        ll total = 0;
        int mn = 0;

        for(int i = 0; i < n; i++) {
            ll L = i;
            ll R = n-i-1;
            if(s[i] == 'L') {
                if(R > L) {
                    mn++;
                    total += R;
                    v.push_back(R-L);
                }
                else total += L;
            }
            else {
                if(L > R) {
                    mn++;
                    v.push_back(L-R);
                    total += L;
                }
                else total += R;
            }
        }

        vector <ll> ans(n+1);
        for(int i = mn; i <= n; i++) ans[i] += total;

        sort(v.begin(), v.end(), greater<ll>());
        for(int i = mn-1; i >= 1; i--) {
            total -= v.back();
            v.pop_back();
            ans[i] = total;
        }

        for(int i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << '\n';
    }
    
    return 0;
}