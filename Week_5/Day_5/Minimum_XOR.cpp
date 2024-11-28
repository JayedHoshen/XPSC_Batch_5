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
        int n, XOR = 0;
        cin >> n;

        vector <int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            XOR ^= a[i];
        }

        int ans = XOR;
        for(int i = 0; i < n; i++) {
            int currXOR = (XOR ^ a[i]);
            ans = min(ans, currXOR);
        }

        cout << ans << '\n';
    }

    return 0;
}