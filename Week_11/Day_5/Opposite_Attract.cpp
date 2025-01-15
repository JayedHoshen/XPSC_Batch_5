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

        for(int i = 0; i < n; i++) {
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }

        cout << s << '\n';
    }

    return 0;
}