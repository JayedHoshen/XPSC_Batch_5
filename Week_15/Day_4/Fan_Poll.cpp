#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int a, b, c; cin >> a >> b >> c;
    int mx = max({a, b, c});

    if(mx == a) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}