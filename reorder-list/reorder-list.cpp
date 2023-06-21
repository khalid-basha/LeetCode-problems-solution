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
    void reorderList(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return;

    std::vector<ListNode*> nodeVector;
    ListNode* p = head;
    while (p != nullptr) {
        nodeVector.push_back(p);
        p = p->next;
    }

    int start = 0;
    int end = nodeVector.size() - 1;

    while (start < end) {
        nodeVector[start]->next = nodeVector[end];
        nodeVector[end]->next = nodeVector[start + 1];

        start++;
        end--;
    }

    nodeVector[start]->next = nullptr;
}

};