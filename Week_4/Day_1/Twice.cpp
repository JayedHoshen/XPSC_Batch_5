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

        vector <int> v(n+5), frq(n+5, 0);
        for(int i = 1; i <= n; i++) cin >> v[i];

        for(int i = 1; i <= n; i++) frq[v[i]]++;

        int cnt = 0;
        for(auto val : frq) {
            cnt += val / 2;
        }

        cout << cnt << '\n';
    }

    return 0;
}