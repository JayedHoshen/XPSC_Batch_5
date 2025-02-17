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
        int n, m; cin >> n >> m;
        string s; cin >> s;

        map <char, int> frq;
        for(auto i : s) frq[i]++;

        int ans = 0;
        string original = "ABCDEFG"; 
        for(auto i : original) {
            if(frq[i] < m) ans += (m - frq[i]);
        }
        cout << ans << endl;
    }

    return 0;
}