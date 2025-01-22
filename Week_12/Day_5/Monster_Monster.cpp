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
        ll n, x; cin >> n >> x;
        vector <ll> a(n); fi0(n) cin >> a[i];

        sort(a.begin(), a.end());

        ll mx = 0;
        fi0(n) {
            ll cr = a[i] + (n-i-1)*x;
            mx = max(mx, cr);
        }
        cout << mx << '\n';
    }

    return 0;
}