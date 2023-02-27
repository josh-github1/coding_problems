#include <iostream>
#include <vector>
#include <string>

class Solution 
{
    public:
        bool validPalindrome(std::string s);
};


// THIS SOLUTION ISN"T WORKING BC IT"S TAKING TOO LONG.
// TRY A FASTER METHOD LIKE SPLITTING THE STRING IN HALF, REVERSING THE OTHER HALF, AND CHECK IF THEY'RE EQUAL.

bool Solution::validPalindrome(std::string s)
{
    int sz = s.length()-1;
    std::vector<std::string> all_possible_strings;
    all_possible_strings.push_back(s);
    for (int i = 0; i <= sz; i++)
    {
      std::string temp = s;
      temp.erase(temp.begin() + i, temp.begin() + i + 1);      // Remove character from string at given index position
      all_possible_strings.push_back(temp);
    }

    std::vector<bool> are_all_palindromes_true;
    int sz2 = all_possible_strings.size()-1;
    for (int i = 0; i <= sz2; i++)
    {
      int sz_end = all_possible_strings[i].size()-1;
      int opposite_index = sz_end;
      bool is_palindrome = true;
      std::cout << all_possible_strings[i] << std::endl;
      bool all_true = true;
      for (int j = 0; j <= sz_end/2; j++)
      {
        std::cout << "begin index is: " << j << std::endl;
        std::cout << "opposite index is: " << opposite_index << std::endl;
        std::cout << all_possible_strings[i][opposite_index] << std::endl;
        std::cout << all_possible_strings[i][j] << std::endl;      
        if (all_possible_strings[i][opposite_index] == all_possible_strings[i][j])
        {
          std::cout << "it's true" << std::endl;
          is_palindrome = true;
        }
        else 
        {
          std::cout << "it's false" << std::endl;
          is_palindrome = false;
          all_true = false;
          break;
        }
        opposite_index -= 1;
      }
      if (all_true == true)
      {
        return true;
      }
      are_all_palindromes_true.push_back(all_true);
      
      std::cout << "\n \n \n \n ";
    }

    int sz3 = are_all_palindromes_true.size()-1;
    bool returnBool = false;
    for (int i = 0; i <= sz3; i++)
    {
      if (are_all_palindromes_true[i] == true)
      {
        returnBool = true;
        break;
      }
    }

    return returnBool;
}


int main()
{
  Solution solve1;

  // bool baz = solve1.validPalindrome("tebbem");
  // bool baz = solve1.validPalindrome("eccer");
  // bool baz = solve1.validPalindrome("abc");
  // bool baz = solve1.validPalindrome("abc");
  // bool baz = solve1.validPalindrome("nflebdyljpamdlvmlnwrivgqiacxxtabvtxbcczxokwjoorquhhuqeroojwkoxzccbxtvbatxxcaiqgvirwnlmvldmaapjlydbelfn");
  bool baz = solve1.validPalindrome("qbggazeolrmdbjjtimxzusceaxdfcefzahggotfkrukgvrcsjxccxjscrvgkurkftogghazfecfdxaecsuzxmitjjbdmrloezaggb");


  std::cout << baz << std::endl;

  return 0;
}