struct Node
{
  int data;
  struct Node* next;
}


Node* deleteFirstNode(struct Node* head)
{
  if (head == NULL)
  return NULL;

  Node* tempNode = head;
  head = head->next;
  
}

