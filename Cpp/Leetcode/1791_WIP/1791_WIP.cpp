#include <iostream>
#include <vector>

class Solution {
public:
    int findCenter(std::vector<std::vector<int>>& edges);
};

int Solution::findCenter(std::vector<std::vector<int>>& edges)
{
  int num1a; 
  int num1b; 
  int num2a; 
  int num2b;
  int center_node;
  int size = static_cast<int>(edges.size());
  if (size == 1)
  {
    std::cout << "Only 1 pair. No center node." << std::endl;
    return 0;
  }
  else{
    num1a = edges[0][0];
    num1b = edges[0][1];

    num2a = edges[1][0];
    num2b = edges[1][1];
  }
  if (num1a == num2a)
  {
    center_node = num2a;
  }
  if (num1a == num2b)
  {
    center_node = num2b;
  }
  if (num1b == num2a)
  {
      center_node = num2a;
  }
  if (num1b == num2b)
  {
      center_node = num2b;
  }  
  return center_node;
};

int main()
{

  // edges = [[1,2],[5,1],[1,3],[1,4]]
  std::vector<std::vector<int>> test = {{1, 2}, {5, 1}, {1, 3}, {1, 4}};
  Solution sol1;
  int center = sol1.findCenter(test);
  std::cout << "The center node is: " << center << std::endl;
}