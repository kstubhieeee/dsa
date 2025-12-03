#include <iostream>
using namespace std;

/*
OUTPUT :
*
**
***
****
*****
******
*****
****
***
**
*
*/

void pattern10(int n)
{
    for (int i = 1; i <= n * 2 - 1; i++)
    {

        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern10(3);
    return 0;
}