#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n, x; cin >> n >> x;

        deque <int> dq;
        for(int i = 0; i < x; i++) dq.push_back(2);

        for(int i = 0; i < n/2; i++) dq.push_back(1);
        for(int i = 0; i < n/2; i++) dq.push_front(1);

        for(auto v : dq) cout << v;
        cout << '\n';
    }

    return 0;
}