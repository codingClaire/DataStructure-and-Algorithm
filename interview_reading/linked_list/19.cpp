/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
     ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||n<1)
            return head;
        ListNode* tmp=head;
        while(tmp!=NULL){
            n--;
            tmp=tmp->next;
        }
        if(n==0) //头节点
            return head->next;
        if(n>0)
            return head;
        tmp=head;
        //累加直到n为0，此时下一个元素就是待删除的元素 即tmp->next
        while(++n<0){
            tmp=tmp->next;
        }
        tmp->next=tmp->next->next;
        return head;
    }

};
/*
[1,2,3,4,5]
2
*/