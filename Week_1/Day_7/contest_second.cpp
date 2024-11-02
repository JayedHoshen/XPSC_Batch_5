#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;

        map <int, int> mp;
        for(int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            mp[a] += b;
        }

        vector <int> v;
        for(auto [x,y] : mp) v.push_back(y);
        
        sort(v.begin(), v.end(), greater<>());

        int sum = 0;
        for(int i = 0; i < min(n, (int)mp.size()); i++) sum += v[i];

        cout << sum << '\n';
    }

    return 0;
}