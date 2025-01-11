#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        string s; cin >> s;

        bool flag = false;
        int cnt = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '.') {cnt++; ans++;}
            else cnt = 0;
            if(cnt == 3) {flag = true; break;}
        }

        if(flag) cout << 2 << '\n';
        else cout << ans << '\n';
    }

    return 0;
}