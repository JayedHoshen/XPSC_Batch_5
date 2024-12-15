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
        ll m, a, b, c; cin >> m >> a >> b >> c;

        ll mnA = min(a, m), mnB = min(b, m);

        ll rowA = m-mnA, rowB = m-mnB;
        ll remain = min(c, rowA+rowB);

        ll ans = remain+mnA+mnB;

        cout << ans << '\n';
    }

    return 0;
}