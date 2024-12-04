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

        if(n%2) {
            if((n/2 == k) || (n/2+1 == k)) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
        else {
            if(n/2 == k) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }

    return 0;
}