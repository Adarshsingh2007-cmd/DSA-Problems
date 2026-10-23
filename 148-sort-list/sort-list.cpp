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
    ListNode* merge(ListNode* left, ListNode* right){
        if(left==NULL) return right;
        if(right==NULL) return left;
        if(left->val > right->val)
        {
            right->next = merge(left,right->next);
            return right;
        }else
        {
            left->next = merge(left->next,right);
            return left;
        }
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
            ListNode* slow = head;
            ListNode* fast = head;
         while(fast->next!=0 && fast->next->next!=0)
         {
            slow = slow->next;
            fast = fast->next->next;            
         }
         ListNode* second = slow->next;
         slow->next = NULL;
         
         ListNode* left =  sortList(head);
         ListNode* right = sortList(second);
         
         return merge(left,right);

    }

         
};