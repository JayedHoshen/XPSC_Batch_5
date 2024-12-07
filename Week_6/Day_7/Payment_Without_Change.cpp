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
        int a, b, n, s; cin >> a >> b >> n >> s;

        int an = min(a, (s/n));

        if((s-(an*n)) <= b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}