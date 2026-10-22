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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* tail = head;
        int size = 1;
        while(tail->next!=NULL)
        {
            size++;
            tail = tail->next;
        } 
        int n = k%size;
        if(n==0) return head;
        ListNode* temp = head;
        for(int i=1;i<size-n;i++)
        {    
             temp = temp->next;
        }
        ListNode* h = temp->next;
        temp->next = NULL;
        tail->next = head;

        return h;

    } 
};