#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abc";
    // next permutation is used to derive the next possible combination of the inputted characters or numbers
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.begin() + 3));
    return 0;
}
