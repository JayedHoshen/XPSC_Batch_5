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
        string s;
        cin >> s;
        st.push(s);
    }

    unordered_set <string> us;
    vector <string> v;

    while(!st.empty()) {
        if(us.find(st.top()) == us.end()) v.push_back(st.top());
        us.insert(st.top());
        st.pop();
    }

    for(auto val : v) {
        int sz = val.size();
        cout << val[sz-2] << val[sz-1];
    }
    cout << '\n';

    return 0;
}