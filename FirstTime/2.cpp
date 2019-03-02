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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* l3= new ListNode(0);
        ListNode* ret=l3;
        int carry=0;
        while(1)
        {
            if(l1==NULL)
            {
                carry+=l2->val;
                l2=l2->next;
            }
            else if(l2==NULL)
            {
                carry+=l1->val;
                l1=l1->next;
            }
            else
            {
                carry=carry+(l1->val)+(l2->val);
                l1=l1->next;
                l2=l2->next;
            }
            l3->next=new ListNode(carry%10);
            carry=carry/10;
            l3=l3->next;
            if(l1==NULL&&l2==NULL)
            {
                if(carry==0)
                    break;
                else
                {
                    l3->next = new ListNode(1);
                    break;
                }

            }

        }
     return ret->next;
    }
};
