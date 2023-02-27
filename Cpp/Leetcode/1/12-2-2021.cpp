#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <sstream> 
#include <vector>

class Solution 
{
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target);
};

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{

    int return_index1;
    int return_index2;

    int sz = nums.size()-1;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i+1; j < sz; j++)
        {
            int tempSum = nums[i] + nums[j];
            if (tempSum == target)
            {
                return_index1 = i;
                return_index2 = j;
            }
        }
    }
    
    std::vector<int> returnVec{return_index1, return_index2};

    return returnVec;

}

int main()
{
    Solution sol1;

    std::vector<int> inVec{0, 1, 2, 3, 4, 5};
    std::vector<int> indices;
    indices = sol1.twoSum(inVec, 4);

    std::cout << "Index 1: " << indices[0] << std::endl;
    std::cout << "Index 2: " << indices[1] << std::endl;

}