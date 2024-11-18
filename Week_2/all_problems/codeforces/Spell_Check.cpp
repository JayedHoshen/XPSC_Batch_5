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

        if(n != 5) {
            cout << "NO\n";
            continue;
        }

        string str = "Timur";
        sort(str.begin(), str.end());
        sort(s.begin(), s.end());

        if(s == str) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}