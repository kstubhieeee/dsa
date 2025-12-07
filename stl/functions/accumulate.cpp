#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {20, 12, 33, 14, 5};
    // accumulate takes the arguments of array and adds them, accumulate(start,end+1,initial sum you want to start with)
    // the initial sum gets added with the final sum of the numbers of arrays
    cout << accumulate(arr, arr + 5, 0);
    return 0;
}