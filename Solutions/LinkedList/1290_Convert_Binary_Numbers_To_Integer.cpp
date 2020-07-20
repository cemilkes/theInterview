
// Merge Two Sorted List

// Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.
//Example: 
//Input: 1->2->4, 1->3->4
//Output: 1->1->2->3->4->4

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
       
        ListNode* temp = head;
        
        while(temp->next != NULL && temp != NULL){
            
            if(temp->val == temp->next->val){
                ListNode* trash = temp->next;
                temp->next = temp->next->next;
                delete trash;
            }else{
                temp = temp->next;
            }
            
        }
        return head;

    }
};

// Time Complexity: O(n)

