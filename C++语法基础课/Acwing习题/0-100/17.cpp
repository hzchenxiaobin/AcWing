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
    vector<int> printListReversingly(ListNode* head) {
        stack<int> stack;
        while(head)
        {
            stack.push(head -> val);
            head = head -> next;
        }
        vector<int> v;
        while(!stack.empty()) 
        {
            v.push_back(stack.top());
            stack.pop();
        }
        return v;
    }
};