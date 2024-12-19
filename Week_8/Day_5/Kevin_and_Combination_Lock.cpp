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
        if(n%33==0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}