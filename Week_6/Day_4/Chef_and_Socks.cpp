#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, x, y; cin >> a >> x >> y;

    int ans = (x+y);

    if(a <= ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}