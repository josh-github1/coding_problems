// Reference: You are given two strings current and correct representing two 24-hour times.

/*
24-hour times are formatted as "HH:MM", where HH is between 00 and 23, and MM is between 00 and 59. 
The earliest 24-hour time is 00:00, and the latest is 23:59.

In one operation you can increase the time current by 1, 5, 15, or 60 minutes. You can perform this operation any number of times.

Return the minimum number of operations needed to convert current to correct.
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>


class Solution 
{
  public:
    int convertTime(std::string* current, std::string* correct);
};

int Solution::convertTime(std::string* current, std::string* correct)
{
  /* Returns minimum number of operations to convert current to correct.
    Args:

    Returns:

  */
  int numberOfOperations;
  std::stringstream a(*current);
  std::stringstream b(*correct);

  std::string segment1;
  std::string segment2;

  std::vector<std::string> list1;
  std::vector<std::string> list2;

  while (std::getline(a, segment1, ':'))
  {
    list1.push_back(segment1);
  }
  while (std::getline(b, segment2, ':'))
  {
    list2.push_back(segment2);
  }
  
  // converts string to integer
  int convert = std::stoi(list1[0]);
  int minutes1 = convert*60;
  int minutes2 = std::stoi(list1[1]);
  int total1 = minutes1 + minutes2;

  int conv2 = std::stoi(list2[0]);
  int minutes1 = conv2*60;
  int minutes2 = std::stoi(list2[1]);
  int total2 = minutes1 + minutes2;

  int diff = total2 - total1;

  // Reminder: In one operation you can increase the time current by 1, 5, 15, or 60 minutes. 
  // You can perform this operation any number of times.
  // earliest is 00:00. latest is 23:59
  // We can only go forward in time.
  
  // NOTE: Arrays are memory efficient vs. vectors because of the memory allocation.
  int operations[4] = {1, 5, 15, 60};

  if (diff = 0)
  {
    numberOfOperations = 0;
  }

  // This is the case when the correct time is before the current time:
  if (diff < 0 )
  {
    std::cout << "Correct time is before current time." << std::endl;
    int time_from_earliest = std::abs(diff);
    int time_until_latest = total1 - total2;
    int total_elapsed = time_from_earliest + time_until_latest;

    int time_to_subtract = total_elapsed;
    int which_operation = 0;
    while (time_to_subtract != 0)
    {
      time_to_subtract -= operations[which_operation];
      if (time_to_subtract < 0)
      {
        time_to_subtract += operations[which_operation];
        which_operation += 1;
        time_to_subtract -= operations[which_operation];
      }
      numberOfOperations += 1;
    } 
  }

  // This is the case when the correct time is after the current time:
  if (diff > 0)
  {
    std::cout << "Correct time is after current time." << std::endl;
  }
  
  /* Pseudocode:
  Subtract correct from current.
  Divide by largest minute number, 60, until a remainder shows up. 
  Extract new number.
  Divide by next number, 15, until a remainder shows up.
  Repeat until all minute amounts are used (e.g. 1, 5, etc.)
  TODO(jramayrat): Still need to figure out rest of logic for finding minimum number of operations.
  */

  return numberOfOperations;
}

int main()
{
  std::string str1 = "qwe";
  std::string str2 = "qwe";
  Solution sol1;
  sol1.convertTime(&str1, &str2);
}