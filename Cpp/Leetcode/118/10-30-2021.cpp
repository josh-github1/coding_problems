#include <vector>
#include <iostream>
#include <sstream>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Solution 
{

    private:

    int thisPrivateVar;
    float thisPrivateFloat;
    char thisPrivateChar;


    public:
    
    void print(std::vector <int> const &a) 
    {
        std::cout << "The vector elements are : ";

        for (int i=0; i < a.size(); i++)
        {
            std::cout << a.at(i) << ' ';
        }
    
        std::cout << std::endl;
    }

    
    std::vector<std::vector<int>> generate(int numRows) 
    {
        
        std::vector<std::vector<int>> returnVec(numRows);
        
        for (int i = 1; i <= numRows; i++)
        {
            std::cout << "Loop iteration: " << i << std::endl;
            std::vector<int> newVec(i); 
            newVec[0] = 1;
            int sz = newVec.size()-1;

            // printf("vector size %d", sz);

            newVec[sz] = 1;

            if (i == 1)
            {
                newVec[0] = 1;
                print(newVec);
                returnVec.push_back(newVec);
                continue;
            }

            
            if (i > 2)
            {
                std::cout << "Where am i" << std::endl;
                for (int j = 1; j < sz; j++)
                {
                    std::cout << "where am i now" << std::endl;
                    int tempAdd = returnVec[j-1][i] + returnVec[j-1][j-1];
                    std::cout << "The computed pascal value is: " << tempAdd << std::endl;
                    newVec[j] = tempAdd;
                }

            }
            

            std::cout << "Printing current vector: " << std::endl;
            print(newVec);
            returnVec.push_back(newVec);
        }

    }

};

int main()
{
    std::cout << "Program starting" << std::endl;
    
    Solution sol_1;

    sol_1.generate(5);

    std::cout << "Program over" << std::endl;

    return 0;
}