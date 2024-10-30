#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair <string, pair<int, string>> p = {"Jayed", {101, "01819"}};

    // cout << p.first << " " << p.second.first << " " << p.second.second << '\n';

    string name = p.first;
    int roll = p.second.first;
    string phone = p.second.second;

    cout << name << ' ' << roll << ' ' << phone << '\n';

    // complex pair crated by me
    pair <pair<int, string>, pair<string, pair<int, string>>> pr = {{1, "Bangladesh"}, {"Dhaka", {1121, "Gazipur"}}};

    cout << pr.first.first << ' ' << pr.first.second << ' ' << pr.second.first << ' ' << pr.second.second.first << ' ' << pr.second.second.second << '\n';

    return 0;
}