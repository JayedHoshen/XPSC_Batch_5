#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        string s, str;
        cin >> s;

        ll n = (ll)s.size();

        stack <ll> upper, lower;
        map <ll, char> mp;
        ll indx;

        for(ll i = 0; i < n; i++) {
            if(s[i] == 'B') {
                if(!upper.empty()) {
                    indx = upper.top();
                    mp[indx] = '#';
                    upper.pop();
                }
                continue;
            }
            if(s[i] == 'b') {
                if(!lower.empty()) {
                    indx = lower.top();
                    mp[indx] = '#';
                    lower.pop();
                }
                continue;
            }
            mp[i] = s[i];
            if(isupper(s[i])) upper.push(i);
            else lower.push(i);
        }

        for(ll i = 0; i < n; i++) {
            if(mp.count(i) && mp[i] != '#') cout << mp[i];
        }
        cout << '\n';
    }    

    return 0;
}