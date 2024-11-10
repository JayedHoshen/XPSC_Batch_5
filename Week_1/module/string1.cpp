#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // string s;
    // cin >> s;
    // cout << s << '\n';

    // int n;
    // cin >> n;

    // string s;
    // for(int i = 0; i < n; i++) {
    //     char ch;
    //     cin >> ch;
    //     s.push_back(ch);
    // }

    // cout << s.front() << " " << s.back() << '\n';

    // s.pop_back();
    // cout << s << '\n';
    
    // cout << s.empty() << '\n';

    // cout << s.size() << '\n';
    // s.clear();
    // cout << s.size() << '\n';

    // cout << s.empty() << '\n';

    // substring
    string s;
    cin >> s;

    cout << s << '\n';
    cout << s.substr(1, 3) << '\n';
    cout << s.substr(2) << '\n';

    return 0;
}