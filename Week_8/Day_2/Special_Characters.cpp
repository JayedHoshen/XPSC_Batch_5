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

        if(n%2) cout << "NO" << '\n';
        else {
            cout << "YES" << '\n';
            
            for(int i = 1; i <= n/2; i++) {
                if(i%2) cout << "AA";
                else cout << "BB";
            }
            cout << '\n';
        }
    }

    return 0;
}