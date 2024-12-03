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
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int mn = INT_MAX;
        vector <int> p(n+1, 0);
        for(int i = 0; i < n; i++) {
            if(s[i] == 'W') p[i+1] = p[i]+1;
            else p[i+1] = p[i];
        }

        for(int i = k; i <= n; i++) mn = min(mn, (p[i]-p[i-k]));

        cout << mn << '\n';
    }

    return 0;
}