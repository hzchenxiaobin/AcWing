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
    ListNode* deleteDuplication(ListNode* head) {
        int arr[101] = {0};
        ListNode *cur = head;
        while(cur)
        {
            int val = cur -> val;
            arr[val]++;
            cur = cur -> next;
        }
        ListNode *h = new ListNode(-1);
        ListNode *pre = h;
        cur = head;
        while(cur)
        {
            if(arr[cur -> val] == 1) {
                pre -> next = new ListNode(cur -> val);
                pre = pre->next;
            }
            cur = cur -> next;
        }
        return h -> next;
    }
};