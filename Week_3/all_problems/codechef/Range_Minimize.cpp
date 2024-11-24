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

        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        if(n <= 3) {
            cout << 0 << '\n';
            continue;
        }

        sort(v.begin(), v.end());

        int mn = min({v[n-1]-v[2], v[n-2]-v[1], v[n-3]-v[0]});

        cout << mn << '\n';
    }

    return 0;
}