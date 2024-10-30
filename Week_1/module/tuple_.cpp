#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // tuple <string, int, string> t = make_tuple("Jayed", 101, "0189");
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";

    tuple <string, int, string> t = {"Jayed khan", 11, "0159"};
    auto [name, roll, phoneNumber] = t;
    
    cout << name << ' ' << roll << ' ' << phoneNumber << endl;

    return 0;
}