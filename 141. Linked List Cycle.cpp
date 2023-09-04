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
        if (head == NULL)
            return false;

        map<ListNode*, bool> visitedMap;
        ListNode* temp = head;

        while (temp != NULL) {
            if (visitedMap[temp] == true)
                return true;
            visitedMap[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};
