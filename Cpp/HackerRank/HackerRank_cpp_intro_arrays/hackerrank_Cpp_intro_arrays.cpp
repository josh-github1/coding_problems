#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
    public:
        void reverseArray();
};

void Solution::reverseArray()
{
    int len_arr;
    cin >> len_arr;
    int arr[len_arr];
    
}

int main() 
{
    int size;
    
    cin >> size;
    
    int arr[size];
    int arr_h[size];
    // cin >> arr;
    
    int h_ind = 0;

    int val;
    for (int i = 0; i < size; i++)
    {
            cin >> val;
            arr[i] = val;
    }
    
    return 0;
}
