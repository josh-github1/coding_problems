#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <vector>

using namespace std;

void print(std::vector <int> const &a) {
   cout << "The vector elements are : ";

  for(int i=0; i < a.size(); i++)
  {
    cout << a.at(i) << ' ';
  }
}

int main ()
{

  vector<int> thisVec;
  while (true) 
  {
    int tempInt;
    cin >> tempInt;
    thisVec.push_back(tempInt);
    if (cin.peek() == '\n') 
    {
      break;
    } 
  }

  print(thisVec); 

  return 0;
}