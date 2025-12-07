#include <bits/stdc++.h>
using namespace std;

int main()
{
    // multimap allows duplicate keys, everything else same as map
    multimap<int, int> mmp;

    mmp.insert({1, 10}); // {1, 10}
    mmp.insert({1, 20}); // {1, 10}, {1, 20}
    mmp.insert({2, 30}); // {1, 10}, {1, 20}, {2, 30}
    mmp.emplace(1, 40);  // {1, 10}, {1, 20}, {1, 40}, {2, 30}

    // prints all key-value pairs (allows duplicate keys)
    for (auto it : mmp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // count returns number of elements with key=1
    cout << mmp.count(1); // prints 3

    // find returns iterator to first occurrence of key
    auto it = mmp.find(1); // points to first element with key=1

    // erase all elements with key=1
    mmp.erase(1); // removes all pairs with key=1

    // lower_bound and upper_bound work same as in map
    auto it1 = mmp.lower_bound(2); // points to first key >= 2
    auto it2 = mmp.upper_bound(2); // points to first key > 2

    // erase, swap, size, empty are same as map
    return 0;
}
