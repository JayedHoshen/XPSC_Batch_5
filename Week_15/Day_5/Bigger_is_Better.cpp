#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

void solve(int n, const string &s) {
    string ss = "";
    fi0(n) ss += 'z';
    if(ss > s) {
        cout << ss << '\n';
        return;
    }
    cout << -1 << '\n';
}

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; string s; cin >> n >> s;
        solve(n, s);
    }

    return 0;
}