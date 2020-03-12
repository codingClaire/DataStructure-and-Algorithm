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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return true;
        ListNode* n1=head;
        ListNode* n2=head;
        while(n2->next!=NULL&&n2->next->next!=NULL){
            n1=n1->next;
            n2=n2->next->next;
        }//n1在中部，n2在结尾
        n2=n1->next;
        n1->next=NULL; //中部释放
        ListNode* n3=NULL;
        //反转右半部分
        while(n2!=NULL){
            n3=n2->next; //保存n2
            n2->next=n1;
            n1=n2;
            n2=n3;
        }
        n3=n1; //n3指向中间元素
        n2=head;
        //n1在尾 n2在头
        bool res=true;
        while(n1!=NULL&&n2!=NULL){
            if(n1->val!=n2->val){
                res=false;
                break;
            }
            n1=n1->next;
            n2=n2->next;
        }
        n1=n3->next;
        n3->next=NULL;
        while(n1!=NULL){//恢复链表
            n2=n1->next;
            n1->next=n3;
            n3=n1;
            n1=n2;
        }
        return res;
    }
};