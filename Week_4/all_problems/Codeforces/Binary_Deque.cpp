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
        int n, req; cin >> n >> req;

        vector <int> a(n);
        int sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if(sum < req) {
            cout << -1 << '\n';
            continue;
        }

        vector <int> next_one(n+1, n);
        int last = n;

        for(int i = n-1; i >= 0; i--) {
            next_one[i] = last;
            if(a[i] == 1) last = i;
        }

        int ans = INT_MAX, curr = 0, L = 0;
        queue <int> q;

        for(int i = 0; i < n; i++) {
            q.push(a[i]);
            curr += a[i];
            while(!q.empty() && curr > req) {
                curr -= (q.front());
                q.pop();
                L++;
            }
            if(curr == req) ans = min(ans, L+(n-next_one[i]));
        }

        cout << ans << '\n';
    }

    return 0;
}