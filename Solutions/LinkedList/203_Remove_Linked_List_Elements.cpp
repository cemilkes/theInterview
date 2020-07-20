
// Remove Linked List Elements

// Remove all elements from a linked list of integers that have value val.
// Example:
//   Input:  1->2->6->3->4->5->6, val = 6
//   Output: 1->2->3->4->5

/**
 * Definiton for singly-linked list
 * class ListNode {
 *    int data;
 *    ListNode *next;
 *    ListNode(int x) {
        data = x;
        next = NULL;
 *    }
 * }
 */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head;
        ListNode* prev;
 
        while(current != NULL && current->val == val){
            head = current->next;
            delete current;
            current = head;
        }
        
        while(current){
            
            while(current != NULL && current->val != val)
            {
                prev = current;
                current = current->next;
            }
            if (current == NULL){return head;}
                prev->next = current->next;
                delete current;
                current = prev->next;
        }
        return head;
    }
};

// Time Complexity: O(n)

