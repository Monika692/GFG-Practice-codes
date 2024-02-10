
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(head==NULL ||head->next==NULL)
        return head;
        Node *temp=head;
    int count0=0,count1=0,count2=0;
    while(temp!=NULL)
    {
        if(temp->data==0)
        count0++;
        else if(temp->data==1)
        count1++;
        else
        count2++;
        
        temp=temp->next;
    }
    
    int n=count0+count1+count2;
    Node *temp1=new Node(0);
    Node *rhead=temp1;
    int i=1;
    while(i<=n)
    {
        Node *newNode=new Node(0);
        if(i<=count0)
        {
            temp1->next=newNode;
        }
        else if(i<=count0+count1)
        {
            newNode->data=1;
            temp1->next=newNode;
        }
        else
        {
        newNode->data=2;
        temp1->next=newNode;
        }
        i++;
        temp1=temp1->next;
      }    
      temp1->next=NULL;
      return rhead->next;
    }
};
