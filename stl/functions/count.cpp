#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {20, 12, 20, 14, 5};
    int num = 20;
    cout << count(arr, arr + 5, num); // counts the number of occurences in the array
    return 0;
}