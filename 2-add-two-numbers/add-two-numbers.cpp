/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* sumlist = new ListNode(-1);
        ListNode* d = sumlist;
        int sum = 0;
        int r=0;
        int s=0;
        while(temp1!=NULL && temp2!=NULL)
        {
           sum = temp1->val + temp2->val + s;
            r = sum%10;
            s = sum/10;
           ListNode* p = new ListNode(0);
           p->val = r;
           sumlist->next = p;
           sumlist = sumlist->next;
           temp1 = temp1->next;
           temp2 = temp2->next;
        }while(temp1!=NULL)
        {
            sum = temp1->val + s;
            r = sum%10;
            s = sum/10;
             ListNode* p = new ListNode(0);
           p->val = r;
           sumlist->next = p;
           sumlist = sumlist->next;
           temp1 = temp1->next;
        }
        while(temp2!=NULL)
        {
            sum = temp2->val + s;
            r = sum%10;
            s = sum/10;
             ListNode* p = new ListNode(0);
           p->val = r;
           sumlist->next = p;
           sumlist = sumlist->next;
           temp2 = temp2->next;
        }if( s == 1)
        {
            ListNode* p = new ListNode(1);
            sumlist->next = p;
        }
         return d->next;

    }
};