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

        set <int> s;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        int cnt = 0;
        for(auto va : s) {
            cnt += va;
        }
        
        bool flag = false;
        for(auto va : s) {
            if(cnt == va) flag = true;
        }
        
        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}