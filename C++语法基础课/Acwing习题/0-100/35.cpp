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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode *cur = head -> next;
        head -> next = NULL;
        while(cur)
        {
            ListNode *next = cur -> next;
            cur -> next = head;
            head = cur;
            cur = next;
        }
        
        return head;
    }
};