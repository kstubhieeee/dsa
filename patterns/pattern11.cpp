#include <iostream>
using namespace std;

/*
KAUSTUBH'S APPROACH
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (i + j + 1) % 2;
        }
        cout << endl;
    }
}
*/

void pattern11(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
int main()
{
    pattern11(5);
    return 0;
}