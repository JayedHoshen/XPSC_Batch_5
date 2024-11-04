#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >>tc;
    while(tc--) {
        int a;
        cin >> a;
        
        int s = 0;
        for(int i = 2; i <= a; i+=7) s++;
        cout << s << '\n';
    }

    return 0;
}