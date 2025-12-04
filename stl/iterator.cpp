#include <bits/stdc++.h>
using namespace std;

void beginIterator()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator itr = v1.begin(); // begin() stores the memory address of the first element in `itr`
    cout << *itr << endl;                   // this will print the first element
    cout << &itr << endl;                   // this will print the address of the first element
}

void endIterator()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator itr = v1.end(); // end() stores the memory address of the element next to the last in `itr`
    cout << *(itr - 1) << endl;           // this will print the last element
    cout << &itr << endl;                 // this will print the address of the last element
}

void loopIterator()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator itrBegin = v1.begin();
    vector<int>::iterator itrEnd = v1.end();
    for (vector<int>::iterator i = itrBegin; i < itrEnd; i++)
    // whenever we define a for loop variable , we must define it as an iterator
    {
        cout << *i << endl;
    }
}

void autoLoop()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator itrBegin = v1.begin();
    vector<int>::iterator itrEnd = v1.end();
    for (auto i = itrBegin; i < itrEnd; i++)
    // auto keyword directly recognizes the data type of the variable , it saves the syntax of defining the variable as an iterator
    {
        cout << *i << endl;
    }
}

void simpleAutoLoop()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    for (auto i : v1)
    {
        cout << i << endl;
    }
}

int main()
{
    // beginIterator();
    // endIterator();
    // loopIterator();
    // autoLoop();
    simpleAutoLoop();
    return 0;
}