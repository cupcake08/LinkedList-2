//For complete problem refer to coding ninjas platform

Node *skipMdeleteN(Node *head, int M, int N)
{
  if(M==0)
  {
    return NULL;
  }
  Node *curr=head;
  Node *rem;
  int count;
  while(curr!=NULL)
  {
    for(count=1;count<M&&curr!=NULL;count++)
    {
      curr=curr->next;
    }
    if(curr==NULL)
    {
      return head;
    }
    rem=curr->next;
    for(count = 1; count<=N && rem!= NULL; count++)
    {
      Node *temp=rem;
      rem=rem->next;
      delete temp;
    }
    curr->next=rem;
    curr=rem;
  }
  return head;
}
