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
        string s, tmp; cin >> s;
        
        tmp = s;
        sort(s.begin(), s.end());

        int cnt = 0;
        for(int i = 0; i < 3; i++) if(s[i] != tmp[i]) cnt++;

        if(cnt == 3) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }

    return 0;
}