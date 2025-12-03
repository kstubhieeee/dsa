#include <iostream>
using namespace std;

/*
OUTPUT :
12345
1234
123
12
1
*/

void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    pattern6(5);
    return 0;
}