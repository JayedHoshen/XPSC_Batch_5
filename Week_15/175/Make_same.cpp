#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector <string> s(3); fi0(3) cin >> s[i];
        
        vector <int> cnt(3, 0);
        int total = 0;
        fi0(3) {
            for(auto c : s[i]) {
                if(c == '0') cnt[i]++;
            }
            total += cnt[i];
        }
        if(total%n != 0) {
            cout << -1 << '\n'; continue;
        }

        int k = total/n;
        if(k == 0 || k == 3) {
            cout << 0 << '\n'; continue;
        }

        vector <int> count = cnt;
        sort(count.begin(), count.end(), greater<int>());
        int sum = 0;
        for(int i = 0; i < k; i++) sum += count[i];
        
        int ans = k*n - sum;
        cout << ans << '\n';
    }

    return 0;
}