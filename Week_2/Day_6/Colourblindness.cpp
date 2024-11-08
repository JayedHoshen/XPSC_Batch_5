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

        string s1, s2;
        cin >> s1 >> s2;

        bool flag = true;
        for(int i = 0; i < n; i++) {
            if(s1[i] == 'R' && (s2[i] == 'G' || s2[i] == 'B')) {
                flag = false;
            }
            else if(s2[i] == 'R' && (s1[i] == 'G' || s1[i] == 'B')) {
                flag = false;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}