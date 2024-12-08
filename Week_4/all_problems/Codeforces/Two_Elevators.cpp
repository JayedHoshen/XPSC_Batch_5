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
        int a, b, c; cin >> a >> b >> c;

        int one = (a-1);
        int two = abs(b-c) + (c-1);

        if(one < two) cout << 1 << '\n';
        else if(one > two) cout << 2 << '\n';
        else cout << 3 << '\n';
    }

    return 0;
}