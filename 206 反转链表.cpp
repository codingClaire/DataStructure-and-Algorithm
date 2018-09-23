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
    ListNode* reverseList(ListNode* head) 
	{
        ListNode *pre=NULL;
		ListNode *p=head;
		
		while(p)
		{
			ListNode* tmpNext=p->next; //暂存p下一个地址，防止变化指针向后找不到后续的数 
			p->next=pre;//p->next指向了向前一个空间（改变指针的指向 
			pre=p;//新链表的头移动到p  
			p=tmpNext; //p 指向原始链表指向的下一个空间 
		 } 
		 return pre;
    }
};
