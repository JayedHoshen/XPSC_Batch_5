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
        int n, k, ans = 0; cin >> n >> k;
        if (n % 2 == 0) ans = k / 2;
        else ans = ceil(1.0 * k / 2);
        cout << (ans % 2 == 0 ? "YES" : "NO") << '\n';
    }

    return 0;
}