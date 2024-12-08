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
        int n; cin >> n;
        string s; cin >> s;

        string ans;
        for(int i = n-1; i >= 0; i--) {
            if(s[i] != '0') ans += (s[i] - '0'-1+'a');
            else {
                string num;
                num += s[i-2];
                num += s[i-1];
                int x = stoi(num);
                i = i - 2;
                ans += ('a'+x-1);
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }

    return 0;
}