Node *removeDuplicates(Node *head)
{
    Node *temp=head;
    Node *prev=NULL;
    while(temp!=NULL)
    {
        prev=temp;
        temp=temp->next;
        if(temp!=NULL && temp->data==prev->data)
        {
            while(temp!=NULL && temp->data==prev->data)
            {
                temp=temp->next;
            }
            prev->next=temp;
        }
    }
    return head;
}
