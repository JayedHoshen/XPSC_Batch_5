#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        int a, b;
        cin >> a >> b;

        int evenCnt = a / 2;
        int oddCnt = a - evenCnt;

        if(b%2) cout << oddCnt-1 << '\n';
        else cout << evenCnt-1 << '\n';
    }

    return 0;
}