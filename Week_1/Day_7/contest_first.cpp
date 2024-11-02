#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        int n;
        cin >> n;

        int ara[n];
        for(int i = 0; i < n; i++) cin >> ara[i];

        vector <int> v;
        for(int i = 0; i < n-1; i++) {
            int dif = abs(ara[i+1] - ara[i]);
            v.push_back(dif);
        }

        bool flag = true;
        for(int val : v) {
            if(val != 5 && val != 7) flag = false;
        } 

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}