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

        vector <int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = 0, tmp = 0;
        int mx = a[n-1];
        for(int i = n-2; i >= 0; i--) {
            if(a[i] < mx) {
                tmp++;
                ans = max(ans, tmp);
            }
            else {
                mx = a[i];
                tmp = 0;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}