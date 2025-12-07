#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {21, 121, 33, 14, 45};
    reverse(vec.begin(), vec.end());
    for (int x : vec)
    {
        cout << x << " ";
    }
    return 0;
}
