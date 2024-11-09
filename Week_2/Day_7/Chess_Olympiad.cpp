#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int r = 4 - (x+y+z);
    int a = x+0.5*y+r;
    int b = y*0.5+z;

    if(a > b) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}