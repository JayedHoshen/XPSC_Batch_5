// sorted, unique and key-val pair
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map <int, int> mp;

    // mp.insert({10, 20}); // key-val pair
    // mp.insert({2, 12});
    mp[10] = 20;
    mp[2] = 12;
    mp[10] = 15; // save unique value
    mp[5] = 25;
    mp[3] = 20;

    // cout << mp[10] << '\n';
    // cout << mp[2] << '\n';

    // for(auto [key, value] : mp) {
    //     cout << key << " -> " << value << '\n';
    // }

    for(auto it : mp) {
        int key = it.first, value = it.second;
        cout << key << " -> " << value << '\n';
    }

    // cout << mp[10] << '\n'; // normaly na pele 0 assign kore dey
    // cout << mp[100] << '\n'; // so, this are not use

    // auto it = mp.find(15);
    // cout << it->first << " -> " << it->second << '\n';

    // if(it == mp.end()) {
    //     cout << "Key not found" << '\n';
    // }
    // else {
    //     cout << it->first << " -> " << it->second << '\n';
    // }
    cout << '\n';

    // mp.erase(10);
    // auto it = mp.find(10);
    // if(it != mp.end()) {
    //     mp.erase(it);
    // }

    // cout << mp.empty() << '\n';
    // cout << mp.size() << '\n';
    // // mp.clear();

    // auto it = mp.begin();
    // it++;
    // cout << it->first << " - " << it->second << '\n';

    // auto it = --mp.end();
    // cout << it->first << " - " << it->second << '\n';

    // auto it = mp.upper_bound(5); // strictly upper key's 
    auto it = mp.lower_bound(5); // strictly equal/upper key's 
    cout << it->first << " - " << it->second << '\n';


    return 0;
}