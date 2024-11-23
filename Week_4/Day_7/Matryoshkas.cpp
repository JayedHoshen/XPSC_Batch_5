#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        int ara[n+5];
        map <int, int> mp;

        for(int i = 0; i < n; i++) {
            cin >> ara[i];
            mp[ara[i]]++;
        }

        sort(ara, ara+n);
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            int val = ara[i];
            if(mp[ara[i]] != 0) {
                ans++;
                while(mp[val] > 0) {
                    mp[val]--;
                    val++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}