
// Middle Of the Linked List

// Given a non-empty, singly linked list with head node head, return a middle node of linked list.
//If there are two middle nodes, return the second middle node.

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

//1- We need one pointer to traverse nodes fast.
//2- if the head is null, then there is no middle node.
//3- Create a pointer and link to the head.
//4- Till pointer and pointer's next is null, jump pointer double nodes and jump the head only one node.
//5- Then return head.


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        if(head == NULL){return NULL;}
        
        ListNode* fastPointer = head;
        
        while(fastPointer && fastPointer->next){
            
            fastPointer = fastPointer->next->next;
            head = head->next;
            
        }
            
        return head;
        
    }
};
// Time Complexity:  O(n) - Space Complexity: O(1)


