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

        map <int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x] = max(mp[x], i+1);
        }

        int ans = 0;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            ans = ans + it->second;
        }

        cout << ans << '\n';
    }

    return 0;
}