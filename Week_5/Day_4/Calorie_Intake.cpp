#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int ans = x - (y*z);

    if(ans < 0) cout << -1 << '\n';
    else cout << ans << '\n';

    return 0;
}