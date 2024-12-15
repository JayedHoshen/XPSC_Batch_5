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

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'p') s[i] = 'q';
            else if(s[i] == 'q') s[i] = 'p';
        }
        
        reverse(s.begin(), s.end());

        cout << s << '\n';
    }

    return 0;
}