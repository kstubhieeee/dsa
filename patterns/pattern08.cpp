

#include <iostream>
using namespace std;

/*
OUTPUT :
***********
 *********
  *******
   *****
    ***
     *
*/

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        for (int m = 2 * n - (2 * i + 1); m < n * 2 - 1; m++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    pattern8(5);
    return 0;
}