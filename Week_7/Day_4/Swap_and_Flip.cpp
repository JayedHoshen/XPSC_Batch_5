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
        string s1, s2; cin >> s1 >> s2;
        
        int s1_zero = 0, s1_one = 0;
        for(int i = 0; i < n; i++) {
            if(s1[i] == '0') s1_zero++;
            if(s1[i] == '1') s1_one++;
        }

        int s2_zero = 0, s2_one = 0;
        for(int i = 0; i < n; i++) {
            if(s2[i] == '0') s2_zero++;
            if(s2[i] == '1') s2_one++;
        }

        if(abs(s1_one - s2_one)%2 == 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}