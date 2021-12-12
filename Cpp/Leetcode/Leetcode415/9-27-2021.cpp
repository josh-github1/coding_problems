#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <vector>


using namespace std;


// Don't do it this way. Add using the classic way of adding numbers.. bring the remainder over.. etc.. 
// Append 0's to the smaller number.. use if statement regarding the length of the string.

/* main program for linked list*/
int main() 
{ 

    string num1_temp = "6913259244";
    string num2_temp = "71103343";
        
    std::string::size_type sz;   // alias of size_t

    long long int this1 = stoll(num1_temp, &sz);
    long long int this2 = stoll(num2_temp, &sz);
        
    cout << "1st int converted: " << this1;
    cout << "2nd int converted: " << this2; 

    long long int ans = this1 + this2;
    string str = to_string(ans);

    cout << "The integers added as a string is: " << str << endl; 

    return 0;
}