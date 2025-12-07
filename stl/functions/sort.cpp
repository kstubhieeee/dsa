#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {20, 12, 33, 14, 5};
    // the sort function takes argument as (the starting index , this argument takes the index number of the element you have to sort + 1)
    // so suppose in the following array if i have to sort till index 4 then i will write (arr , arr+5) i.e. index+1
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}