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
        vector <string> s(6);
        for(int i = 0; i < 6; i++) cin >> s[i];

        bool ans = false;
        for(int i = 0; i < 4; i++) {
            if(s[i] == "W" && s[i+1] == "W" && s[i+2] == "W") {
                ans = true;
                break;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}