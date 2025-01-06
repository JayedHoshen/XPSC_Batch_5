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
        int x, y; cin >> x >> y;

        int ans = 0;
        if(x < y) ans = y;
        else ans = (2*y) - x;

        cout << ans << '\n';
    }

    return 0;
}