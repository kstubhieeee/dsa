#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls = {1, 2, 3, 4};
    ls.push_back(5);      // adds 5 at the back
    ls.emplace_back(6);   // adds 6 at the back and it is similar to push back
    ls.push_front(66);    // adds 66 at the starting of the list
    ls.emplace_front(77); // adds 77 at the starting of the list and it is similar to push front
    for (auto i : ls)
    {
        cout << i << " ";
    }
    return 0;
}

// rest all the functions are same like vector
// begin , end , rbegin , rend , clear , insert , size , swap