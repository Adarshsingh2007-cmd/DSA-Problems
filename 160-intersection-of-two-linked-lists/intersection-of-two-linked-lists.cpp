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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int cnt1=1;
        ListNode* temp1 = headA;
        while(temp1->next!=0)
        {
            cnt1++;
            temp1 = temp1->next;
        }
       int cnt2=1;
        ListNode* temp2 = headB;
        while(temp2->next!=0)
        {
            cnt2++;
            temp2 = temp2->next;
        }
        ListNode* p = headA;
        ListNode* q = headB;
        for(int i=1;i<=cnt1;i++)
        {
            for(int j=1;j<=cnt2;j++)
            {
                if(p==q)
                {
                    return p;
                }
                else
                {
                    q = q->next;
                }
            } q = headB;
            p = p->next;
        } return NULL;
    }
};