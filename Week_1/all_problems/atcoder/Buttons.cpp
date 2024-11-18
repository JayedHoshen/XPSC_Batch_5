#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int mx = max(a, b);
    if(a == b) cout << a+b << '\n';
    else cout << ((mx*2) - 1) << '\n';

    return 0;
}