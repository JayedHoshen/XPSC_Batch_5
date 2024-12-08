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
        int n, k; cin >> n >> k;

        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        bool flag = false;
        int indx = -1;
        for(int i = 0; i < n; i++) {
            int cnt  = 0;
            for(int j = 0; j < n; j++) {
                int a = abs(v[i] - v[j]);
                if(i != j && a%k != 0) {
                    cnt++;                    
                }
                if(cnt+1 == n) {
                    flag = true;
                    indx = i+1;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << '\n' << indx << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}