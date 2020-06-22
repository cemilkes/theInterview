
// Insert node at specific position

// You’re given the pointer to the head node of a linked list, an integer to add to the list and the position at which the integer must be inserted. Create a new node with the given integer, insert this node at the desired position and return the head node.

//A position of 0 indicates head, a position of 1 indicates one node away from the head and so on. The head pointer given may be null meaning that the initial list is empty.

//As an example, if your list starts as 1->2->3 and you want to insert a node at position 2 with data = 4, your new list should be 1->2->4->3

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
// 1- If the list is empty and position is 0 then head will be the first node which is in idex 0 and it points to NULL.
// 2- If the position is 0, then create a new node and points to head. Then newly added node will be head.
// 3- Else create a temporary node which points to head, traverse it till to the place where one before index.
// 4- Create a new node and points to the temproray node's next.
// 5- And temporary node's next will be new node.

ListNode* insertNodeAtPosition(ListNode* head, int data, int position) {

    if (head == NULL && position == 0){
        head = new ListNode(data);
        head -> next = NULL;
        return head;
    }

    if (position == 0){
    
        ListNode* newNode = new ListNode(data);
        newNode -> next = head;
        head = newNode;
        return head;
    }else{

        ListNode* curr = head;
        for(int i = 0; i < position - 1; i++){
            curr = curr -> next;
        }

        ListNode* newNode = new ListNode(data);
        newNode -> next = curr -> next;
        curr -> next = newNode;
        return head;
    }
}



// Time Complexity: For insertion = O(1)
// Space Complexity: O(1)

