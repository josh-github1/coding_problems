#include <cmath>
#include <cstdio>

#include <iostream>
#include <sstream>
#include <stdexcept>

#include <algorithm>
#include <vector>
#include <string>


using namespace std;

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        string::size_type sz;

        int a1 = x;
        stringstream s1;
        
        s1 << a1;
        int num1 = static_cast<int>(s1.tellp());
        cout << "size of stringstream: " << num1 << endl;
        string s2 = s1.str();

        for (int begin = 0, end = num1-1; begin < end; begin++, end--)
        {
            swap(s2[begin], s2[end]);
        }

        if (s2[num1-1] == '-')
        {
            return false;
        }
        
        int a2 = stoi(s2, &sz);

        if (a2 == x)
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
    cout << s.isPalindrome(121);
    
    return 0;
}