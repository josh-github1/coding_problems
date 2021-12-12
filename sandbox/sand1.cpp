#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <vector>


int main()
{

    std::vector<std::vector<int>> returnVec(5);

    std::vector<int> tempVec(3);
    tempVec[0] = 1;
    tempVec[1] = 3;
    tempVec[2] = 5;
    
    std::vector<int> tempVec1(4);
    tempVec1[0] = 2;
    tempVec1[1] = 6;
    tempVec1[2] = 9;
    tempVec1[3] = 8;
    
    returnVec.push_back(tempVec);
    returnVec.push_back(tempVec1);
    
    std::cout << returnVec[0] << std::endl;
    std::cout << returnVec[1] << std::endl;

    std::cout << returnVec[0][1] << std::endl;
    std::cout << returnVec[1][1] << std::endl;

    
    return 0;
}