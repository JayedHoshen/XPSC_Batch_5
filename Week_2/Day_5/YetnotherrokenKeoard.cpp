#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        string s, str;
        cin >> s;

        for(char ch : s) {
            if(ch == 'b') {
                if(!str.empty() && islower(str.back())) str.pop_back();
            }
            else if(ch == 'B') {
                if(!str.empty() && isupper(str.back())) str.pop_back();
            }
            else str += ch;
        }
        cout << str << '\n';
    }    

    return 0;
}