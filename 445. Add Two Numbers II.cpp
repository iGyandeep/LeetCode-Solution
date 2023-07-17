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
private:
    ListNode* reverse(ListNode* list) {
        ListNode* current = list;
        ListNode* previous = NULL;
        ListNode* next = NULL;
        while (current != NULL) {
            next = current -> next;
            current -> next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }
    
    void insertAtTail (ListNode* &head, ListNode* &tail, int data) {
        ListNode* temp = new ListNode(data);
        if (head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    ListNode* add(ListNode* l1, ListNode* l2) {
        int carry = 0;
        
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int num_1 = 0;
            if (l1 != NULL)
                num_1 = l1 -> val;
            int num_2 = 0;
            if (l2 != NULL)
                num_2 = l2 -> val;
            
            int sum = carry + num_1 + num_2;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            
            if (l1 != NULL)
                l1 = l1 -> next;
            if (l2 != NULL)
                l2 = l2 -> next;
        }
        return ansHead;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* sum = add(l1, l2);
        sum = reverse(sum);
        return sum;
    }
};
