#include <iostream>
#include <cstdio>
#include <array>

using namespace std;


/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
    std::array<int,5> myints;   
    int maxNum = myints[0];
    for (int i = 0; i < myints.size(); i++)
    {
           if (myints[i] > maxNum)
           {
               maxNum = myints[i];
           }
    }
    return maxNum;
}

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}