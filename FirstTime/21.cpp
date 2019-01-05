class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if (l1==NULL) return l2;
        if (l2==NULL) return l1;
        
        ListNode* head = new ListNode(-1);//头节点 
        ListNode *tmp = head;//tmp=head tmp->next 就是head->next 
 
        while(l1!=NULL&&l2!=NULL)
		{
			if(l1->val>l2->val)
			{
				tmp->next=l2;
				l2=l2->next;
			}
			else
			{
				tmp->next=l1;
				l1=l1->next;
			}
			tmp=tmp->next;
		} 
        while(l1==NULL&&l2!=NULL)
		{
			tmp->next=l2;
			l2=l2->next;
			tmp=tmp->next;	
		} 
        while(l2==NULL&&l1!=NULL)
        {
            tmp->next=l1;
            l1=l1->next;
            tmp=tmp->next;
        }
        return head->next;    
    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*class Solution 
{
public:
    int  Length(ListNode* l)
    {
        int len=0;
        while(l!=NULL)
        {
            l=l->next;
            len++;
        }
        return len;
    }

    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* merge;
        int len1=Length(l1);
        int len2=Length(l2);
        int aposi=0,bposi=0;
        int aitem=l1->val,bitem=l2->val;
        while(aposi<=len1-1&&bposi<=len2-1)
        {
             if(aitem<=bitem)
             {
                  merge->item=aitem;
                  aposi++;
                 
              }
              else
             {
                 merge->item=bitem;
                 bposi++;
             }
        }
      //归并剩余元素
    while(aposi<len1-1){}
    while(bposi<len1-1){}
        return merge;
    }
};*/

