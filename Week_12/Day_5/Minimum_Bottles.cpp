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
        int n, x; cin >> n >> x;

        vector <int> a(n); fi0(n) cin >> a[i];

        int total = accumulate(a.begin(), a.end(), 0);
        int ans = (total + x - 1) / x;

        cout << ans << '\n';
    }

    return 0;
}