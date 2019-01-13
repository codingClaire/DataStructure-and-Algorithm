/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
       ListNode *cur1=head;//慢指针
       ListNode *cur2=head;//快指针
       if(head==NULL) return false;
        while(cur2!=NULL&&cur1!=NULL&&cur2->next!=NULL)
        {
            cur2=cur2->next->next;
            cur1=cur1->next;
            if(cur2==cur1) return true;

        //快慢指针必会相遇 解决了循环问题
        }
       return false;
    }
};
