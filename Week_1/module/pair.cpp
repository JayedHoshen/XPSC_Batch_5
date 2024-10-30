#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair <string, int> student = make_pair("Jayed", 101);
    pair <string, int> student = {"Jayed", 101};

    // cout << student.first << " " << student.second << '\n';
    // student.first = "Jayed Hoshen";

    auto [name, roll] = student; // use up to c++17
    name = "Jayed khan";

    cout << name << " " << roll;

    return 0;
}