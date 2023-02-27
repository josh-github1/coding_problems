#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <sstream> 
#include <vector>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution 
{
    public:
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{

    ListNode *returnList = l1;

    while (l1->next != NULL)
    {
        returnList->data = l1->data;
        l1 = l1->next;
    }
    l1->next = l1;
}

