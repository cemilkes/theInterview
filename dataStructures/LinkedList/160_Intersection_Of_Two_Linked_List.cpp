
// Intersection of two Linked List

// Write a program to find the node at which the intersection of two singly linked lists begins.

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* pointerA = headA;
        ListNode* pointerB = headB;
       
        while(pointerA != pointerB){
            
            if(pointerA == NULL){
                pointerA = headB;
            }else{
                pointerA = pointerA->next;
            }
            
            if(pointerB == NULL){
                pointerB = headA;
            }else{
                pointerB = pointerB->next;
            }
        }
       return pointerA;
    }
};

// Time Complexity: O(n)

