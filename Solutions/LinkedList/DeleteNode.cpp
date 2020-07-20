
// Delete node at specific position

// You’re given the pointer to the head node of a linked list and the position of a node to delete. Delete the node at the given position and return the head node. A position of 0 indicates head, a position of 1 indicates one node away from the head and so on. The list may become empty after you delete the node.

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

// Algorithm:
// 1- If the list is empty and position is 0 then return Null
// 2- If the position is 0, which means that we are removing head node. Create a new pointer and points to head and head pointer should be pointed to head' next.
// 3- Then Delete first node.
// 4- Else create a temporary pointer and go through the node where one before the position
// 6- Create an another pointer(trash) to delete the node and it points to temporary's next.
// 7- Temporary pointer will points to its' next. and delete trash and return head.

ListNode* deleteNode(ListNode* head, int position) {
        if (head == NULL){
            cout << "Linked List is empty" << endl;
            return NULL;
        }
        ListNode* trash;
        if (position == 0){
            trash = head;
            head = head -> next;
            delete trash;
            return head;
        }else{

        ListNode* curr = head;
        for(int i = 0; i < position - 1; i++){
            curr = curr -> next;
            }
        trash = curr -> next;
        curr -> next = curr -> next -> next;
        delete trash;
        return head;

        }
}


// Time Complexity: For insertion = O(1)
// Space Complexity: O(1)

