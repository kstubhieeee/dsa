#include <bits/stdc++.h>
using namespace std;

int main()
{
    // unordered_map stores elements in no particular order
    // has better average time complexity O(1) for most operations
    // worst case O(n) when hash collisions occur
    unordered_map<int, int> ump;

    ump[1] = 10;         // inserts key=1 with value=10
    ump.insert({2, 20}); // inserts key=2 with value=20
    ump.emplace(3, 30);  // inserts key=3 with value=30

    // prints all key-value pairs (order is not sorted/predictable)
    for (auto it : ump)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << ump[1];   // prints value at key=1
    cout << ump[100]; // prints 0 (creates key with default value if not exists)

    auto it = ump.find(2); // returns iterator to key=2 if found
    if (it != ump.end())
    {
        cout << it->second; // prints 20
    }

    auto it2 = ump.find(50); // returns ump.end() since key doesn't exist

    ump.erase(1); // removes key=1

    cout << ump.count(2); // returns 1 if key exists, 0 otherwise

    // lower_bound and upper_bound do NOT work in unordered_map
    // rest functions like size, empty, swap work same as map

    return 0;
}
