#include <iostream>
#include <vector>


class Solution 
{
  public:
      vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies);
};

vector<bool> Solution::kidsWithCandies(vector<int>& candies, int extraCandies)
{
  int max = 0;
  // Find max
  for (int i = 0; i < candies.size()-1; i++)
  {
    int curr = candies[i] + extraCandies;
    if (curr > max)
    {
      max = curr;
    }
  }

  // return vector solution
  vector<bool> returnVec;
  for (int i = 0; i < candies.size()-1; i++)
  {
    int curr = candies[i] + extraCandies;
    if (curr >= max)
    {
      returnVec.push_back(true)
    }
    if (curr < max)
    {
      returnVec.push_back(false)
    }
  }

  return returnVec;
}

int main()
{
  Solution solve1;

  vec1 = [1, 2, 3, 4, 5];
  vec2 = 3;

  vector<bool> testVec = solve1.kidsWithCandies(vec1, vec2);

  std::cout << testVec << endl; // this probably won't print the vector, it's been awhile since I've coded in C++ 

  return 0;
}