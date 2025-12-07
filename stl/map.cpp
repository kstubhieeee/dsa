#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp1; // stores key-value pairs where both are integers

    map<int, pair<int, int>> mpp2; // stores integer key with pair of integers as value

    map<pair<int, int>, int> mpp3; // stores pair of integers as key with integer as value

    mpp1[1] = 2;          // inserts key=1 with value=2
    mpp1.emplace({3, 1}); // inserts key=3 with value=1 (efficient insertion)

    mpp1.insert({2, 4}); // inserts key=2 with value=4

    mpp3[{2, 3}] = 10; // inserts pair (2,3) as key with value=10

    // prints all key-value pairs in sorted order of keys
    for (auto it : mpp1)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp1[1]; // prints value at key=1 (which is 2)
    cout << mpp1[5];
    ; // prints 0 (default value) since key 5 doesn't exist

    auto it = mpp1.find(3); // returns iterator pointing to key=3
    cout << *(it).second;   // prints value at key=3 (which is 1)

    auto it = mpp1.find(5); // returns mpp1.end() since key=5 doesn't exist

    // This is the syntax
    auto it = mpp1.lower_bound(2); // points to first key >= 2

    auto it = mpp1.upper_bound(3); // points to first key > 3

    // erase, swap, size, empty, are same as above
    return 0;
}