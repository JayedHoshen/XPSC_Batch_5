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
        string s; cin >> s;
        
        int n = s.size();
        map <char, vector<int>> mp;

        for(int i = 0; i < n; i++) mp[s[i]].push_back(i+1);

        if(s[0] > s[n-1]) {
            int jmp = 0;
            int cost = abs(s[0] - s[n-1]);
            vector <int> path;

            for(int i = 0; s[0]+i >= s[n-1]; i--) {
                char c = s[0]+i;
                if(mp.find(c) != mp.end()) {
                    for(auto v : mp[c]) path.push_back(v);
                }
            }

            cout << cost << " " << path.size() << '\n';

            for(auto x : path) cout << x << " ";
            cout << '\n';
        }
        else if(s[0] < s[n-1]) {
            int jmp = 0;
            int cost = abs(s[0] - s[n-1]);
            vector <int> path;

            for(int i = 0; s[0]+i <= s[n-1]; i++) {
                char c = s[0]+i;
                if(mp.find(c) != mp.end()) {
                    for(auto v : mp[c]) path.push_back(v);
                }
            }

            cout << cost << " " << path.size() << '\n';

            for(auto x : path) cout << x << " ";
            cout << '\n';
        }
        else {
            cout << 0 << " " << mp[s[0]].size() << '\n';
            for(auto x : mp[s[0]]) cout << x << " ";
            cout << '\n';
        }
    }

    return 0;
}