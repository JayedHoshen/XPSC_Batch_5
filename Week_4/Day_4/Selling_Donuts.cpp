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

        vector <int> d(n), c(m);
        for(int i = 0; i < n; i++) cin >> d[i];
        for(int i = 0; i < m; i++) cin >> c[i];

        int cnt = 0;
        for(auto v : c) {
            v--;
            if(d[v] > 0) d[v]--;
            else if(d[v] == 0) cnt++;
        }

        cout << cnt <<  '\n';
    }

    return 0;
}