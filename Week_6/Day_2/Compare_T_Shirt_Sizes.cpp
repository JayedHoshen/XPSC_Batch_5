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
        string s1, s2;
        cin >> s1 >> s2;

        int ax = 0, bx = 0, i = 0, j = 0;

        while(s1[i] == 'X') ax++, i++;
        while(s2[j] == 'X') bx++, j++;

        if(s1[i] == s2[j]) {
            if(s1[i] == 'M') cout << "=" << '\n';
            else if(s1[i] == 'L') {
                if(ax > bx) cout << ">" << '\n';
                else if(ax < bx) cout << "<" << '\n';
                else cout << "=" << '\n';
            }
            else {
                if(ax < bx) cout << ">" << '\n';
                else if(ax > bx) cout << "<" << '\n';
                else cout << "=" << '\n';
            }
        }
        else {
            if(s1[i] < s2[j]) cout << ">" << '\n';
            else cout << "<" << '\n';
        }
    }

    return 0;
}