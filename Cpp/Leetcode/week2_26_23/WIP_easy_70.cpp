#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

// This library has the enumerate function that sums all elements/ints in a vector
#include <numeric>

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
    int do_this_once = 1;
    while (count >= 0)
    {
        std::cout << "This is the current 'count': " << count << std::endl;
        std::vector<int> tmp_vec(count, 1);
        int remainder_left = n - count;
        int divisible_by_two = remainder_left % 2;

        // Handling the case where n is divisible by 2:
        if (n % 2 == 0 && count == 0)
        {
            if (do_this_once == 1)
            {
                std::cout << "Doing this once..." << std::endl;
                int sz = n/2;
                std::vector<int> tmp_vec_once(sz, 2);
                tmp_vec.insert(tmp_vec.end(), tmp_vec_once.begin(), tmp_vec_once.end());
                do_this_once = 0;
            }

        }

        if (divisible_by_two)
        {
            std::cout << "It's divisible by 2" << std::endl;
            int twos_vec_sz = remainder_left/2;
            std::vector<int> tmp_vec_twos(twos_vec_sz, 2);
            tmp_vec.insert(tmp_vec.end(), tmp_vec_twos.begin(), tmp_vec_twos.end());
        }
        int total = std::accumulate(tmp_vec.begin(), tmp_vec.end(), 0);
        std::cout << "This is the 'total' value: " << total << std::endl;

        if (total == n)
        {
            std::cout << "It equals original 'n', appending. " << std::endl;
            vec_list.push_back(tmp_vec);
        }
        // std::cout << "'vec_list': " << vec_list << std::endl;
        count -= 1;
    }
    // for (auto i: vec_list)
    // {
    //     std::cout << i << std::endl;
    // }
    std::cout << "Final list size before: " << final_list.size() << std::endl;
    std::cout << "vec_list size before: " << vec_list.size() << std::endl;

    for (int i = 0; i < vec_list.size(); i++)
    {
        do
        {
            final_list.push_back(vec_list[i]);
        } while(std::next_permutation(vec_list[i].begin(), vec_list[i].end()));
    }
    std::cout << "Final list size after: " << final_list.size() << std::endl;

    return final_list.size();

};

int main()
{
  Solution solve1;
  int a = solve1.climbStairs(2);
  std::cout << "Value for a: " << a << std::endl;
}