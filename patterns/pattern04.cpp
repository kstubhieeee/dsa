#include <iostream>
using namespace std;

/*
OUTPUT :
1
22
333
4444
55555
*/

class Solution
{
public:
    void pattern4(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
    }
};