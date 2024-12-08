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

        int x = 1, cnt = 1;
        while(n > x) {
            x = (x+1)*2;
            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}