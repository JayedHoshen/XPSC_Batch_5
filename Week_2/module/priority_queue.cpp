#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue <int> pq; // non-increasing (DSC)
    // priority_queue <int, vector<int>, greater<int>> pq; // non-decreasing (ASC)

    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(10);

    // cout << pq.top() << '\n';
    // pq.pop();
    // cout << pq.top() << '\n';
    // pq.pop();

    // cout << "Size -> " << pq.size() << '\n';
    // cout << pq.empty() << '\n';
    // cout << "Size -> " << pq.size() << '\n';

    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}