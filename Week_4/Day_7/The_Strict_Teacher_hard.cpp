#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector <int> v(m);
        for(int i = 0; i < m; i++) cin >> v[i];

        sort(v.begin(), v.end());

        while(q--) {
            int x; 
            cin >> x;

            int id = upper_bound(v.begin(), v.end(), x) - v.begin();
            if(id == 0) cout << v[id] - 1 << '\n';
            else if(id == m) cout << n - v[id-1] << '\n';
            else cout << (v[id] - v[id-1]) / 2 << '\n';
        }
    }

    return 0;
}