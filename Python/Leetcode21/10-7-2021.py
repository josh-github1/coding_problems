# Author: Joshua Ramayrat
# Leetcode problem 21


# Definition for singly-linked list.



class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class LinkedList:

    def __init__(self):
        self.head = None
    

    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        l1_t = l1
        l2_t = l2
        
        l_total = l1_t + l2_t
        
    
        
def main():
