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
        int h, l, w; cin >> h >> l >> w;

        cout << 1000 / (2*(h*l+l*w+w*h)) << '\n';
    }

    return 0;
}