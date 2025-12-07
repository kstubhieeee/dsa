#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {11, 25, 30, 19, 17};
    auto maxElem = max_element(v.begin(), v.end());
    cout << "Max Element: " << *maxElem << endl;
    auto minElem = min_element(v.begin(), v.end());
    cout << "Min Element: " << *minElem;
    return 0;
}
