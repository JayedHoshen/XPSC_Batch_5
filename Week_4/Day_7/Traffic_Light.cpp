#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n; char c;
        cin >> n >> c;

        string s; cin >> s;

        s.append(s);

        int ans = -1e9;
        int last_indx = -1;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == 'g') last_indx = i;
            if(s[i] == c) ans = max(ans, last_indx-i);
        }

        cout << ans << '\n';
    }

    return 0;
}