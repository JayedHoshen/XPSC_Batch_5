#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; cin >> n;

        vector <int> a(n); fi0(n) cin >> a[i];

        ll total = accumulate(a.begin(), a.end(), 0LL);
        sort(a.begin(), a.end());

        ll cur = total, mx = total;
        fi0(n) {
            cur -= a[i];
            ll cand = cur + (ll)(i+1)*(i+1);
            mx = max(mx, cand);
        }
        mx = max(mx, (ll)n*n);
        cout << mx << '\n';
    }

    return 0;
}