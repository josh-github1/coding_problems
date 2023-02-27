/*

Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].

*/
#include <vector>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Solution 
{
public:
    std::vector<int> sumZero(int n) 
    {
        int rand1 = rand() % 1000;
        const int sz = n;
        std::vector<int> thisVec;

        thisVec.push_back(rand1);
        int index = 1;
        while (index < n)
        {
            int rand_temp = rand() % 1000;
         
            std::cout << "Generated a random number: " << rand_temp << std::endl;

            int sz = thisVec.size()-1;
            int sameNum = 0;
            for (int i = 0; i < sz; i++)
            {
                if (rand_temp == thisVec[i])
                {
                    sameNum = 1;
                }
            }
            if (sameNum == 0)
            {
                thisVec.push_back(rand_temp);
                index += 1;
            }
        }


    }
};

int main()
{
    std::cout << "Program starting" << std::endl;
    Solution sol_1;

    std::vector<int> fooVec;
    fooVec = sol_1.sumZero(10);

    std::cout << "Printing vector... " << std::endl;
    for (auto i: fooVec)
    {
        std::cout << i << ' ';
    }

    std::cout << "Program over" << std::endl;
    return 0;
}