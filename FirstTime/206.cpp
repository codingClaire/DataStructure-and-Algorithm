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
			ListNode* tmpNext=p->next; //�ݴ�p��һ����ַ����ֹ�仯ָ������Ҳ����������� 
			p->next=pre;//p->nextָ������ǰһ���ռ䣨�ı�ָ���ָ�� 
			pre=p;//�������ͷ�ƶ���p  
			p=tmpNext; //p ָ��ԭʼ����ָ�����һ���ռ� 
		 } 
		 return pre;
    }
};
