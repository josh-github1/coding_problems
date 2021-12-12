#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <sstream>


using namespace std;

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        int reversedNumber = 0, remainder;

        int n = x;

        if (x < 0)
        {
            return false;
        }

        while(n != 0) 
        {
            remainder = n%10;
            reversedNumber = reversedNumber*10 + remainder;
            n /= 10;
        }
        if (reversedNumber == x)
        {
            return true;
        } else
        {
            return false;
        }

        
    }
};
int main() 
{
    Solution s;
    cout << s.isPalindrome(-121);
    
    return 0;
}