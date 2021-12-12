#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
    int size;
    
    cin >> size;
    
    int inArr;

    vector<int> foo;

    for (int i = 0; i < size; i++) 
    {
        cin >> inArr; 
        foo.push_back(inArr);
    }

    for (int k = size-1; k >= 0; k--)
    {
        cout << foo[k] << " ";
    }
    
    return 0;
}

