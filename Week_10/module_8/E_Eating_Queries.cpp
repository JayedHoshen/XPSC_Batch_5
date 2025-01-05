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
        int n, q; cin >> n >> q;
        vector <int> a(n), prefix(n+1);
        fi0(n) cin >> a[i];

        sort(a.rbegin(), a.rend());
        for(int i = 1; i <= n; i++) prefix[i] = prefix[i-1] + a[i-1];

        fi0(q) {
            int k, ans = -1; cin >> k;
            auto it = lower_bound(prefix.begin(), prefix.end(), k);
            if(it != prefix.end()) ans = it - prefix.begin();
            cout << ans << '\n';
        }
    }

    return 0;
}