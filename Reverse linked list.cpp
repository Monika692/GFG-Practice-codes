
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         if(head==NULL)
return NULL;
if(head->next==NULL)
return head;
ListNode * nxt=head->next;
ListNode * rev = reverseList(nxt);
ListNode * ans = rev;
while(rev->next!=NULL)
{
rev=rev->next;
}
rev->next=head;
head->next=NULL;
return ans;
    }
};
