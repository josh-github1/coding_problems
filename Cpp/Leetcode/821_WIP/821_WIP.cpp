class Solution {
public:
    vector<int> shortestToChar(string s, char c);
};

vector<int> Solution::shortestToChar(string s, char c)
{
  vector<int> distances;
  vector<int> target_locations;
  for (int i = 0; i < s.length()-1; i++)
  {
    if (s[i] == c)
    {
      target_locations.push_back(i);
    }
  }
  for (int i)
}