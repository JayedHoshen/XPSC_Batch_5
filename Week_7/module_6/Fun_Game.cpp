#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n; cin >> n;
        string s, t; cin >> s >> t;

        if(s == t) {
            cout << "YES" << '\n';
            continue;
        }

        int pos = -1;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                pos = i;
                break;
            }
        }

        if(pos != -1) {
            bool ok = true;
            for(int i = 0; i < n; i++) {
                if(s[i] != t[i]) {
                    if(pos > i) {
                        ok = false;
                        break;
                    }
                }
            }
            if(ok) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
        else cout << "NO" << '\n';
    }

    return 0;
}