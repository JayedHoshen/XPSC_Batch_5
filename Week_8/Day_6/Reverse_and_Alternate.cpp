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

        int zero_zero = 0, one_one = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1' && s[i+1] == '1') one_one++;
            else if(s[i] == '0' && s[i+1] == '0') zero_zero++;
        }

        if(zero_zero == 0 && one_one == 0)  cout << "Yes" << '\n';
        else if(zero_zero >= 2 || one_one >= 2)    cout << "No" << '\n';
        else if(zero_zero == 1 && one_one == 1)    cout << "Yes" << '\n';
        else if(zero_zero == 1)         {
            if(s[0] == '1' || s[n-1] == '1') cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
        else {
            if(s[0] == '0' || s[n-1] == '0') cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
    }

    return 0;
}