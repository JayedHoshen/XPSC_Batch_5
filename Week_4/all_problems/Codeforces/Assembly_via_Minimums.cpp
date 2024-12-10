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
        int m = (n*(n-1)) / 2;

        int a[n], b[m];
        for(int i = 0; i < m; i++) cin >> b[i];

        sort(b, b+m);

        int x = 1, indx = 0, BA = n-x;
        while(n-x > 0) {
            a[indx++] = b[BA-1];
            x++;
            BA += n-x;
        }

        a[n-1] = 1000000000;
        for(auto v : a) cout << v << " ";
        cout << '\n';
    }

    return 0;
}