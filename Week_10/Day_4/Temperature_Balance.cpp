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

        vector <int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        ll s = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            s += a[i];
            ans += abs(s);
        }

        cout << ans << '\n';
    }

    return 0;
}