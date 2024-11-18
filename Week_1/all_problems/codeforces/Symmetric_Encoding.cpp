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
        
        string s;
        cin >> s;

        set <char> st;
        for(int i = 0; i < n; i++) st.insert(s[i]);

        map <char, char> mp;
        auto rit = st.rbegin();

        for(auto it = st.begin(); it != st.end(); it++) {
            mp[*it] = *rit;
            rit++;
        }

        for(int i = 0; i < n; i++) cout << mp[s[i]];
        cout << '\n';
    }

    return 0;
}