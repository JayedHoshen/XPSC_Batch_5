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

        sort(v.begin(), v.end());

        auto it = v.rbegin();
        if(it != v.end()) {
            v.pop_back();
            v.pop_back();
        }
        
        for(auto val : v) cout << val << " ";
        cout << '\n';
    }

    return 0;
}