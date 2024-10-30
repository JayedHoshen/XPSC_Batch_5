#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int firstpos = -1, lastpos = -1;
        firstpos = s.find('B');
        lastpos = s.rfind('B');
        int ans = lastpos - firstpos + 1;
        cout << ans << '\n';
    }

    return 0;
}