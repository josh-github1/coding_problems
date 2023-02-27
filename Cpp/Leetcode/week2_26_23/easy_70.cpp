#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

class Solution {
public:
    int climbStairs(int n);
};

int Solution::climbStairs(int n)
{
    std::vector<std::vector<int>> vec_list;
    std::vector<std::vector<int>> final_list;
    int count = n;

    // Create a vector of 1s with size 'count'
    // Incrementally append vectors consisting of 1s that add up to 'n' steps.
    // Subtract 1 from 'count' each loop iteration
    // If remainder between 'count' and 'n' is divisible by 2, 
    // divide the remainder by 2. 
    // Create a vector consisting of 2's the size of that result.
    // Append this new vector to the 1s vector of size 'count'.
    // Append this complete vector to the list of vectors
    // Run function to find every combination of each vector
    //      in the list of vectors.
    while (count != 0)
    {
        std::vector<int> tmp_vec(count, 1);
        int remainder = n - count;
        double twos_count = remainder/2;
        if (twos_count >= 1)
        {
            if (remainder % 2 != 0)
            {
                tmp_vec.push_back(1);
            }
            int twos_vec_sz = int(twos_count);
            std::vector<int> tmp_vec_twos(twos_vec_sz, 2);
            tmp_vec.insert(tmp_vec.end(), tmp_vec_twos.begin(), tmp_vec_twos.end());
        }
        vec_list.push_back(tmp_vec);
    }
    for (int i = 0; i < vec_list.size()-1; i++)
    {
        do
        {
            final_list.push_back(vec_list[i]);
        } while(std::next_permutation(vec_list[i].begin(), vec_list[i].end()));
    }
    return final_list.size();

};

int main()
{
  Solution solve1;
  int a = solve1.climbStairs(10);
  std::cout << a << std::endl;
}