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

        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        priority_queue <int> pq;
        long long int ans = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] == 0) {
                if(pq.size() > 0) {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else pq.push(v[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}