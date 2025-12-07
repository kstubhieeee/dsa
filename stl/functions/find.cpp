#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {20, 12, 33, 14, 5};
    auto it = find(arr, arr + 5, 12); // returns the element if found
    if (it == (arr + 5))             // returns the last index iterator if not found
    {
        cout << "Element not found";
    }
    return 0;
}