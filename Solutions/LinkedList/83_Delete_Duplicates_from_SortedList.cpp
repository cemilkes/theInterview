
// Delete Duplicates from Sorted List

// Given a sorted linked list, delete all duplicates such that each element appear only once.

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

