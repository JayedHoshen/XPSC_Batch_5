#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n, k; cin >> n >> k;

        vector <int> a(n); fi0(n) cin >> a[i];
        
        int r = 0, ans = 0;
        fi0(n) {
            if(a[i] >= k) r += a[i];
            else if(a[i] == 0 && r > 0) {
                ans++;
                r--;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}