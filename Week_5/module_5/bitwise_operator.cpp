#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 11, b = 9;
    
    // int ans = a & b; // 9
    // int ans = a | b; // 11
    // int ans = a ^ b; // 2
    // int ans = ~ a; // minus value -12
    // int ans = a << 3; // 88
    // int ans = 1 << 8; // 256
    // ll ans = 1LL << 40; // 1099511627776
    int ans = a >> 2; // 2

    cout << ans << '\n';

    return 0;
}