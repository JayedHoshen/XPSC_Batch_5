#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n, m;
    cin >> x >> n >> m;

    int a = x+m;
    
    if(a >= n) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}