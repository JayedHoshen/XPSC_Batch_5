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
        string s; cin >> s;

        int r = 0, cnt = 0;
        while(r < n) {
            if(s[r] == 'B') {
                r = min(n, r+k);
                cnt++;
            }
            else r++;
        }

        cout << cnt << '\n';
    }

    return 0;
}