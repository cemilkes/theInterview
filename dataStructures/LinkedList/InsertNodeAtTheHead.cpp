
// Insert new Node at the head of the linked list

// You’re given the pointer to the head node of a linked list and an integer to add to the list. Create a new node with the given integer, insert this node at the head of the linked list and return the new head node. The head pointer given may be null meaning that the initial list is empty.

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
// 1- Check if the list is empty or not with given head node.
// 2- if it is empty, then create a new node and return head.
// 3- Otherwise create a new node and point its next to the head.
// 4- Newly added node becomes the new head of the list. 
// 5- Return head

ListNode* insertNodeAtHead(ListNode* head, int data) {

    if(head == NULL){
        head = new ListNode(data);
        head -> next = NULL;
        return head;
    }

    ListNode* newNode = new ListNode(data);
    newNode -> next = head;
    head = newNode;
    return head;

}


// Time Complexity: For insertion = O(1)
// Space Complexity: O(1)

