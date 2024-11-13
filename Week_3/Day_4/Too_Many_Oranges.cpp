#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc; cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        
        int mn = n*10;
        int mx = n*12;
        
        if(k >= mn && k <= mx) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}