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

        vector <int> fruit(n), height(n);
        for(int i = 0; i < n; i++) cin >> fruit[i];
        for(int i = 0; i < n; i++) cin >> height[i];

        ll l = 0, r = 0, fruitCnt = 0, ans = 0;
        while(r < n) {
            fruitCnt += fruit[r];

            while(l <= r && fruitCnt > k) {
                fruitCnt -= fruit[l];
                l++;
            }

            if(r > 0) {
                if(l < r && (height[r-1]%height[r]) != 0) {
                    l = r;
                    fruitCnt = fruit[r];
                }
            }
            ans = max(ans, r-l+1);

            r++;
        }

        cout << ans << '\n';
    }

    return 0;
}