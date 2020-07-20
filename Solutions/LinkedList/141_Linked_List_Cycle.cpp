
// Linked List Cycle

// Given a linked list, determine if it has a cycle in it.
//To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

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
    bool hasCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL){
            return false;
        }else{
            ListNode* slow_p = head;
            ListNode* fast_p = head;
            
            while(fast_p && fast_p->next && slow_p){
                slow_p = slow_p->next;
                fast_p = fast_p->next->next;
                
                if(slow_p == fast_p){
                    cout << "Detect Loop" << endl;
                    return true;
                }
            }
        }
        return false;
    }
};

// Time Complexity: O(1)

