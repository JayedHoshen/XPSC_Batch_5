#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n, m;
        cin >> n >> m;

        string s; cin >> s;

        set <int> st;
        for(int i = 0; i < m; i++) {
            int x; cin >> x;
            st.insert(x);
        }

        string c; cin >> c;
        sort(c.begin(), c.end());

        int indx = 0;
        for(auto it : st) {
            s[it-1] = c[indx];
            indx++;
        }

        cout << s << '\n';
    }

    return 0;
}