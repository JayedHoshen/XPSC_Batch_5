#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n, m;
        cin >> n >> m;

        map <int, set<int>> mp;
        for(int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for(int i = 1; i <= m; i++) {
            int l, r;
            cin >> l >> r;
            if((mp.find(l) == mp.end()) || (mp.find(r) == mp.end())) cout << "NO" << '\n';
            else {
                int st, ft;
                st = *mp[l].begin();
                ft = *mp[r].rbegin();
                if(st < ft) cout << "YES" << '\n';
                else cout << "NO" << '\n';
            }
        }
    }

    return 0;
}