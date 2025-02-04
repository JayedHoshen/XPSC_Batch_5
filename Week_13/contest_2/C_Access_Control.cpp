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
        int n, x; cin >> n >> x;
        string s; cin >> s;

        int zeroCnt = 0;
        for(int i = 0; i < s.size(); i++) if(s[i] == '0') zeroCnt++;
        
        if(x <= zeroCnt) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}