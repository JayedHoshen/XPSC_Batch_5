#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int solve(int n) {
    if (n == 1) { return 1; } 
    else if (n >= 2 && n % 2 == 0) {
        int t = n / 2 + 1;
        if (t >= 2) { return t;}
    } 
    else if ((n - 1) % 2 == 0) {
        int t = (n - 1) / 2;
        if (t >= 1) { return t; }
    }
    return -1;
}

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        cout << solve(n) << '\n';   
    }

    return 0;
}