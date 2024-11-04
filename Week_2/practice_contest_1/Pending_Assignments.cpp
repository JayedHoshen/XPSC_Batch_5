#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >>tc;
    while(tc--) {
        int a, b, c;
        cin >> a >> b >> c;
        if((c*24*60) >= (a*b)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}