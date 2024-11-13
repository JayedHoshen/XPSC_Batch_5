#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, z;
    cin >> x >> y >> z;
    
    int ans = min((x*2+3*y), (2*z+y));
    
    cout << ans << '\n';
    
    return 0;
}