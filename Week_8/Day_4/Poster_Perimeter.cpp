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
        int n, m, k; cin >> n >> m >> k;
        
        int minDiff = INT_MAX;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                int p = 2*(i+j);
                int diff = abs(p-k);
                minDiff = min(minDiff, diff);
            }
        }

        cout << minDiff << '\n';
    }

    return 0;
}