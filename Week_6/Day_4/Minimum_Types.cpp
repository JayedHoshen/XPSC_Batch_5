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

        vector <int> a(n), b(n), c;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        for(int i = 0; i < n; i++) c.push_back(a[i]*b[i]);

        sort(c.begin(), c.end(), greater<int>());

        int s = 0, cnt = 0, f = 1;
        for(int i = 0; i < n; i++) {
            s += c[i];
            cnt++;
            if(s >= k) {
                cout << cnt << '\n';
                f = 0;
                break;
            }
        }
        if(f) cout << -1 << '\n';
    }

    return 0;
}