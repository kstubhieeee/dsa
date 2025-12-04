#include <bits/stdc++.h>
using namespace std;

void basicVectors()
{
    vector<int> v;
    v.push_back(1); // pushes 1 in the vector v
    cout << v[0] << " ";
    v.emplace_back(2); // pushes 2 in the vector v (same as push_back)
    cout << v[1];
}

void vectorsWithPair()
{
    vector<pair<int, int>> v;   // defining vectors with pair
    v.push_back({3, 4});        // this requires the use of curly brackets
    cout << v[0].second << " "; // 4
    v.emplace_back(11, 20);     // this doesn't require the use of curly brackets
    cout << v[1].first;         // 11
}

void vectorWithElementsFilled()
{
    vector<int> v1(4, 20);
    // note : size() function is used to measure the length of a vector
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}

void copyVector()
{
    vector<int> v1(5, 22);
    // we copied one vector to another by just simply putting it in the another vector definition
    vector<int> v2(v1);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
}

int main()
{
    // basicVectors();
    // vectorsWithPair();
    // vectorWithElementsFilled();
    copyVector();
    return 0;
}