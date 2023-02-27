#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <vector>


using namespace std;


// A linked list node
struct Node
{

   int data;
   struct Node *next;
   Node() : data(0), next(nullptr) {}
   Node(int x) : data(x), next(nullptr) {}
   Node(int x, Node *next) : data(x), next(next) {}

};


//insert a new node in front of the list
void push(struct Node** head, int node_data)
{
   /* 1. create and allocate node */
   struct Node* newNode = new Node;
 
   /* 2. assign data to node */
   newNode->data = node_data;
 
   /* 3. set next of new node as head */
   newNode->next = (*head);
 
   /* 4. move the head to point to the new node */
   (*head) = newNode;
}
 
//insert new node after a given node
void insertAfter(struct Node* prev_node, int node_data)
{
  /*1. check if the given prev_node is NULL */
if (prev_node == NULL)
{
   cout<<"the given previous node is required,cannot be NULL"; return; } 
 
   /* 2. create and allocate new node */
   struct Node* newNode =new Node; 
 
   /* 3. assign data to the node */
   newNode->data = node_data;
 
   /* 4. Make next of new node as next of prev_node */
   newNode->next = prev_node->next;
 
    /* 5. move the next of prev_node as new_node */
    prev_node->next = newNode;
}
 
/* insert new node at the end of the linked list */
void append(struct Node** head, int node_data)
{
    /* 1. create and allocate node */
    struct Node* newNode = new Node;
    
    struct Node *last = *head; /* used in step 5*/
    
    /* 2. assign data to the node */
    newNode->data = node_data;
    
    /* 3. set next pointer of new node to null as its the last node*/
    newNode->next = NULL;
    
    /* 4. if list is empty, new node becomes first node */
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
    
    /* 6. Change the next of last node */
    last->next = newNode;
    return;
}
 
// display linked list contents
void displayList(struct Node *node)
{
   //traverse the list to display each node
   while (node != NULL)
   {
      cout<<node->data<<"-->";
      node = node->next;
   }
    
    if(node== NULL)
        cout<<"null"; 
} 

void print(std::vector <int> const &a) 
{
   cout << "The vector elements are : ";

  for(int i=0; i < a.size(); i++)
  {
    cout << a.at(i) << ' ';
  }
}

class Solution 
{
public:

    // 1st step: just output the numbers reversed first..
    //      reverse nodes from original linked list to a new linked list and return that.
    /*
    Node* addTwoNumbers(Node* l1, Node* l2) 
    {
        vector<int> tempVec_1;
        vector<int> tempVec_2;

        int index_1 = 0;
        int index_2 = 0;

        Node* head_temp = NULL;

        while (l1->next != NULL)
        {
            l1->data = tempVec_1[index_1];
            index_1++;
            l1 = l1->next;
            cout << "loop 1" << endl;
        }
        cout << "loop 1 finished" << endl;

        while (l2->next != NULL)
        {
            l2->data = tempVec_2[index_2];
        }

            // Insert 10.
        append(&head, 43); 
        
        // Insert 40 at the end. 
        append(&head, 40); // Insert 50, after 20. 
        insertAfter(head->next, 50);
        
        cout << "linked list 1: "<< endl;
        displayList(head);

    }
    */
};


/* main program for linked list*/
int main() 
{ 
    /* empty list */
    struct Node* head = NULL; 
    
    // Insert 10.
    append(&head, 43); 
    
    // Insert 40 at the end. 
    append(&head, 40); // Insert 50, after 20. 
    insertAfter(head->next, 50);
    
    cout << "linked list 1: "<< endl;
    displayList(head);

    /* empty list */
    struct Node* head1 = NULL; 
    
    // Insert 10.
    append(&head1, 43); 
    
    
    // Insert 40 at the end. 
    append(&head1, 40); // Insert 50, after 20. 
    insertAfter(head1->next, 50);
    
    cout << " " << endl;
    cout<< "linked list 2: "<< endl;
    displayList(head1);
    cout << "Where am i " << endl;
    // Solution sol;
    // sol.addTwoNumbers(head, head1);

    vector<int> tempVec_1;
    vector<int> tempVec_2;

    int index_1 = 0;
    int index_2 = 0;

    Node* head_temp = NULL;


    cout << " am I here " << endl; 
    while (head1->next != NULL)
    {
        head1->data = tempVec_1[index_1];
        index_1++;
        head1 = head1->next;
        cout << "loop 1" << endl;
    }
    cout << "loop 1 finished" << endl;
    
    print(tempVec_1);
    return 0;
}