#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m = n;

    int cnt = 0;
    while(m != 0) {
        cnt++;
        m = m / 10;
    }

    if(cnt == 0) cout << "0000\n";
    else if(cnt == 1) cout << "000" << n << '\n';
    else if(cnt == 2) cout << "00" << n << '\n';
    else if(cnt == 3) cout << "0" << n << '\n';
    else cout << n << '\n';

    return 0;
}