#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int n, m; cin >> n >> m;

    if((n+m*10) >= 100) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}