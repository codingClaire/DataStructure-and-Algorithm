class Solution 
{
public:
    ListNode* middleNode(ListNode* head) 
    {
        int count=0;
        ListNode *h=head;
        while(h->next!=NULL)
        {
            h=h->next;
            count++;
        }
        if(count%2==0)
            count=count/2;
        else count=count/2+1;
        for(int i=0;i<count;i++)
        {
            head=head->next;
        }
        return head;
    }
};
