#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

class Solution {
    public:
        int minDistance(std::string& word1, std::string& word2);
};

int Solution::minDistance(std::string& word1, std::string& word2)
{
    std::vector<std::string> v1;
    std::vector<std::string> v2;

    std::vector<std::string> common_strings;

    for (int i = 0; i < word1.length()-1; i++)
    {
        for (int j = i; j < word1.length()-1; j++)
        {
            std::string substr_temp = word1.substr(i, j);
            v1.push_back(substr_temp);
        }
    }
    for (int i = 0; i < word2.length()-1; i++)
    {
        for (int j = i; j < word2.length()-1; j++)
        {
            std::string substr_temp = word2.substr(i, j);
            v2.push_back(substr_temp);
        }
    }

    std::set_intersection(v1.begin(), v1.end(),
                          v2.begin(), v2.end(),
                          std::back_inserter(common_strings));
    
    int max = 0;
    int index_of_max;
    for (int i = 0; i < common_strings.size()-1; i++)
    {
        if (common_strings[i].length()-1 > max)
        {
            index_of_max = i;
        }
    }
    std::string max_substr = common_strings[index_of_max];
    int substr_end = max_substr.length()-1;

    std::size_t found1 = word1.find(max_substr);
    std::size_t found2 = word2.find(max_substr);
    
    int begin1_count = found1;
    int end1_count = word1.length()-1-(found1+substr_end);
    int begin2_count = found2;
    int end2_count = word2.length()-1-(found2+substr_end);

    int total = begin1_count + end1_count + begin2_count + end2_count;

    return total;
}

int main()
{
  // NOTE: Do I do this with string* ??
  std::string* word1 = "sea";
  std::string* word2 = "eat";
}