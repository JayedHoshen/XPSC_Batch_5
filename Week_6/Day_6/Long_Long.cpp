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
        
        int a[n];
        ll sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += abs(a[i]);
        }

        int cnt = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 0 && cnt == 0) continue;
            if(a[i] <= 0) cnt++;
            else {
                if(cnt > 0) ans++;
                cnt = 0;
            }

        }
        if(cnt) ans++;

        cout << sum << " " << ans << '\n';
    }

    return 0;
}