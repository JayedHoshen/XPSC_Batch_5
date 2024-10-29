#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n;
        cin >> n;
        
        int r = 100 - n;
        int d = r / 10;
        cout << d*10 << "\n";
    }

    return 0;
}