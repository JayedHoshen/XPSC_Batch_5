#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    if(n < 3) cout << 1 << '\n';
    else if(n < 7) cout << 2 << '\n';
    else cout << 3 << '\n';

    return 0;
}