#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        cout << 2 << '\n';
        cout << n << " " << n-1 << '\n';

        int x = n;
        int y = n-2;
        while(x >= 3 && y >= 1) {
            cout << x << " " << y << '\n';
            x--; y--;
        }
    }

    return 0;
}