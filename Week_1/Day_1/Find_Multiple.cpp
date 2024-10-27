#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int flag = -1;
    for(int i = a; i <= b; i++) {
        if(i%c == 0) {
            cout << i << "\n";
            flag = 1;
            break;
        } 
    }

    if(flag == -1) cout << "-1\n";

    return 0;
}