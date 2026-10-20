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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = slow;
        slow = NULL;
        ListNode* p = NULL;
        ListNode* q = NULL;
        while(temp!=NULL)
        {   q = temp->next;
            temp->next = p;
            p = temp;
            temp = q;
        }
        while(head!=NULL && p!=NULL)
        {
            if(head->val == p->val)
            {
                head = head->next;
                p = p->next;
            }
            else
            {
                return false;
            }
        }return true;
    }
};