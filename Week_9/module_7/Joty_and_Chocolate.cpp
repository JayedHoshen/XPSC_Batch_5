#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll LCM(ll a, ll b) {
    return ((a/__gcd(a, b)) * b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q; cin >> n >> a >> b >> p >> q;

    ll x = (n/a) * p, y = (n/b) * q, extra = n / LCM(a, b);
    ll ans = ((x+y) - extra*(p+q)) + (extra * max(p,q));
    
    cout << ans << '\n';

    return 0;
}