#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int n; cin >> n;

    if(n%100 > 9) cout << 'K' << n%100 << '\n';
    else cout << "K0" << n%100 << '\n';

    return 0;
}