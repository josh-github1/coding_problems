
 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution 
{
    public:
    
        ListNode* deleteDuplicates(ListNode* head) 
        {

            int prev_val;
            int curr_val;

            int val_still_same = 0;
            int index = 0;

            ListNode* curr_node = head;
            ListNode* next_node;
 
            ListNode* return_node = curr_node;
            
            return_node = new ListNode;
            curr_node = new ListNode;
            next_node = new ListNode;
            
            while (curr_node->next != 0)
            {

                    
                int currentValue = curr_node->val;
                    
                int nextValue = next_node->val;
                                        
                    
                if (currentValue == nextValue)
                {
                    val_still_same = 1;
                        
                    while (val_still_same == 1)
                    {
                        next_node = next_node->next;
                        nextValue = next_node->val;
                        if (currentValue != nextValue)
                        {
                            val_still_same = 0;
                            
                        }
                    }
                    curr_node->next = next_node;
                    curr_node = next_node;
                    next_node = next_node->next;
                    
                        
                           
                }
                    
                
                
            }
                
            index += 1;
            return return_node;
        }

};

int main()
{
    Solution solu_1;
    
}