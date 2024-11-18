#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        string s;
        cin >> s;

        int n = s.size();
        bool flag = false;
        for(int i = 0; i < n-1; i++) {
            cout << s[i];
            if(s[i] == s[i+1] && !flag) {
                if(s[i] != 'z') cout << char (s[i]+1);
                else cout << 'a';
                flag = true;
            }
        }

        if(flag) cout << s[n-1] << '\n';
        
        if(!flag && s[n-1] != 'z') cout << s[n-1] << char(s[n-1]+1) << '\n';
        else if(!flag) cout << s[n-1] << 'a' << '\n';
    }

    return 0;
}