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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head == NULL||head->next == NULL) return head;
        ListNode *front=head;
        ListNode *behind=head->next;

        while(behind!=NULL)
        {
            if(front->val == behind->val)
            {
                front->next = behind->next;
                behind = behind->next;
            }
            else
            {
                front = behind;
                behind = behind->next;
            }
        }
        return head;
    }
};
//双指针法 不断往下移动
