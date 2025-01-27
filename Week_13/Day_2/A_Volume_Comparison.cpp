#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int a, b, c, d; cin >> a >> b >> c >> d;

    int x = a*b*c;
    int y = (int)pow(d, 3);

    if(x > y) cout << "Cuboid" << '\n';
    else if(x < y) cout << "Cube" << '\n';
    else cout << "Equal" << '\n';

    return 0;
}