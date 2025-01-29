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
        int n, K;
        string s;

        cin >> n >> K >> s;

        int ans = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'S') ans++;
        }
        if(ans >= K) cout << n << '\n';
        else cout << K-ans+n-1 << '\n';
    }

    return 0;
}