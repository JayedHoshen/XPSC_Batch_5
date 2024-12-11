#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    if(m >= (n/2.0)) cout << "NEWBIE" << '\n';
    else cout << "PRO" << '\n';

    return 0;
}