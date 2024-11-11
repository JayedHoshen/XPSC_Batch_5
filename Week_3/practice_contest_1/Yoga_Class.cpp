#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n, x, y;
        cin >> n >> x >> y;

        int mx;
        if(2*x <= y) mx = (n%2)*x + y*(n/2);
        else mx = n*x;

        cout << mx << '\n';
    }

    return 0;
}