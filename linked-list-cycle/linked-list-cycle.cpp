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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;

        ListNode *p1 = head,*p2 = head;
        while(p2 != NULL && p2 ->next != NULL)
        {
            p2 = p2->next->next;
            p1 = p1->next;
            if(p2 == p1)
                return true;
        }
        return false;
    }
};