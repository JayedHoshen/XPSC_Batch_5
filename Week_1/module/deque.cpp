#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // deque <int> dq;
    // for(int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     dq.push_back(x);
    // }

    deque <int> dq(n);
    for(int i = 0; i < n; i++) cin >> dq[i];

    dq.push_front(5);
    dq.push_back(2);

    cout << dq.front() << '\n';
    dq.pop_front();

    cout << dq.back() << '\n';
    dq.pop_back();

    for(auto val : dq) cout << val << " ";
    cout << '\n';

    return 0;
}