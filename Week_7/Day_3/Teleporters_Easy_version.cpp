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
        int n, c; cin >> n >> c;

        vector <ll> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            v[i] += (i+1);
        }

        sort(v.begin(), v.end());

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] <= c) {
                c -= v[i];
                cnt++;
            }
            else break;
        }
        
        cout << cnt << '\n';
    }

    return 0;
}