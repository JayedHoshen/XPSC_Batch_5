#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    stack <string> st;
    while(tc--) {
        string s; cin >> s;

        int n = s.size();
        string ss = s.substr(n-2);
        st.push(ss);
    }

    vector <string> v;
    while(!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }

    int n = v.size();
    for(int i = 0; i < n-1; i++) {
        
    } 
    cout << '\n';

    return 0;
}