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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *h = head;
        while(l1 && l2)
        {
            if(l1 -> val <= l2 -> val)
            {
                h -> next = l1;
                l1 = l1 -> next;
            } else 
            {
                h -> next = l2;
                l2 = l2 -> next;
            }
            h = h->next;
        }

        if(l1) h->next = l1;
        if(l2) h->next = l2;

        return head -> next;
    }
};