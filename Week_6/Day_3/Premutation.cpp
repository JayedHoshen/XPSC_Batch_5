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
        
        vector <ll> p[n+1];
        int m = n;
        while(m--) {
            for(int i = 1; i < n; i++) {
                int x; cin >> x;
                p[x].push_back(i);
            }
        }

        for(int i = 1; i <= n; i++) sort(p[i].begin(), p[i].end());

        ll ans[n+1];
        for(int i = 1; i <= n; i++) {
            if(p[i][n-2] == n-1) {
                if(p[i][0] == n-1) ans[n] = i;
                else ans[n-1] = i;
            }
            else ans[p[i][n-2]] = i;
        }

        for(int i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << '\n';
    }

    return 0;
}