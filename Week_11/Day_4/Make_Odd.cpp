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
        int n; cin >> n;
        string a, b; cin >> a >> b;

        int ans = 0, sn = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == '1' || b[i] == '1') ans++;
            if((a[i] == '1' &&  b[i] == '0') || (a[i] == '0' &&  b[i] == '1')) sn++;
        }

        if(ans%2 == 1 || sn > 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}