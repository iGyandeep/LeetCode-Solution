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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        if (count == 1)
            return NULL;
            
        
        if (count-n == 0)
            return head->next;

        temp = head;
        int i = 1;

        while (temp != NULL)
        {
            if (i == count-n) {
                temp->next = temp->next->next;
                break;
            }
            i++;
            temp = temp->next;
        }
        return head;
    }
};
