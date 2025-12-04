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

void operationsOnVector()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    cout << v1.front() << endl; // dispays the first element : 1
    cout << v1.back() << endl;  // displayes the last element : 5
    v1.pop_back();              // removes last element
    for (auto i : v1)
    {
        cout << i << " "; // 1,2,3,4
    }
}

void deleteElements()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    v1.erase(v1.begin());     // deletes the first element
    v1.erase(v1.begin() + 2); // deletes the third element from the new array
    // for (auto i : v1)
    // {
    //     cout << i << endl;
    // }

    vector<int> v2 = {1, 2, 3, 4, 5};
    v2.erase(v2.begin() + 1, v2.end() - 1); // deletes the elements from the position 1 to 3 i.e. 2,3,4 assuming the indexing starts from 0
    for (auto i : v2)
    {
        cout << i << endl;
    }
}
int main()
{
    // basicVectors();
    // vectorsWithPair();
    // vectorWithElementsFilled();
    // copyVector();
    // operationsOnVector();
    deleteElements();
    return 0;
}