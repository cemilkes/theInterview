
// Delete node in Linked List

// Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

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
// 1 -> 5 -> 7 -> 8 -> NULL and delete 5
// 1 -> 7 -> 8 -> NULL

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        node->val = node->next->val;
        node->next = node->next->next;
        
    }
};

// Time Complexity: O(1)

