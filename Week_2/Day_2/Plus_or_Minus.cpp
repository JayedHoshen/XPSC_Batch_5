#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        int a, b, c;
        cin >> a >> b >> c;

        if((a+b) == c) cout << "+\n";
        else cout << "-\n";
    }

    return 0;
}