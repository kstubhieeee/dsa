#include <bits/stdc++.h>
using namespace std;

void initialPairExplanation()
{
    pair<int, int> p = {1, 3};
    cout << p.first <<" ";
    cout << p.second<<" ";
}


void pairInPair(){
    pair<int , pair<int , int>> p = {1,{2,3}};
    cout<<p.second.first;
}

void pairsWithArray(){
    pair<int,int> arr[]={{1,2},{3,4},{5,6},{7,8}};
    cout<<arr[2].first;
}

int main()
{
    // initialPairExplanation();
    // pairInPair();
    pairsWithArray();
    return 0;
}