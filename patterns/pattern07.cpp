#include <iostream>
using namespace std;

/*
OUTPUT :
    *
   ***
  *****
 *******
*********
*/

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int m = 2 * i + 1; m < n * 2 - 1; m++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    pattern7(4);
    return 0;
}