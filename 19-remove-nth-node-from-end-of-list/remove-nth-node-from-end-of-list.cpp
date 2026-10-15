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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int cnt = 1;
       ListNode* temp = head;
       while(temp->next!=0)
       {
        temp = temp->next;
        cnt++;
       }
       if(cnt==n)
       {
         head = head->next;
         return head;
       }
       ListNode* p = head;
       for(int i=1;i<=cnt-n-1;i++)
       {
        p = p->next;
       }p->next = p->next->next;
       return head;
    }
};