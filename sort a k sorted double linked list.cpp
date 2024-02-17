
class Solution
{
public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k)
    {
        multiset<int> s;
        DLLNode *t= head;
        while(t){
            s.insert(t->data);
            t = t->next;
        }
        t= head;
        for(auto i: s){
            t->data = i;
            t = t->next;
        }
        return head;
    }
};
