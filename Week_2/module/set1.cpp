#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set <int> s;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it = s.begin();

    // cout << *it << '\n';

    // it++;
    // cout << *it << '\n';

    // it--;
    // cout << *it << '\n';

    // for(auto it = s.begin(); it != s.end(); it++) cout << *it << " ";
    // cout << '\n';

    // for(auto it : s) {
    //     cout << it << " ";
    // }
    // cout << '\n';

    // auto it = s.find(40);
    
    // if(it != s.end()) cout << "Found" << '\n';
    // else cout << "Not found" << '\n';

    auto it = s.begin();
    if(it != s.end()) s.erase(10); 

    // int N;
    // cin >> N;

    // // auto it = s.upper_bound(N);
    // auto it = s.lower_bound(N);

    // if(it == s.end()) {
    //     cout << "END" << '\n';
    // }
    // else {
    //     cout << *it << '\n';
    // }

    return 0;
}