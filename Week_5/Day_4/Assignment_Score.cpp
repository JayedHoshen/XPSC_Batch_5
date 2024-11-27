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
        int n;
        cin >> n;

        vector <int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int sum = 0;
        for(int i = 0; i < n; i++) sum += a[i];
       
        int m = (n+1) * 100 * 0.5;
        int ans = m-sum;

        if(sum+100 < m) cout << -1 << '\n';
        else if(sum >= m) cout << 0 << '\n';
        else cout << ans << '\n';
    }

    return 0;
}