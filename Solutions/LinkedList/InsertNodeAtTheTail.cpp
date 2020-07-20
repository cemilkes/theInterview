
// Print the Elements of Linked List

// You are given the pointer to the head node of a linked list and an integer to add to the list. Create a new node with the given integer. Insert this node at the tail of the linked list and return the head node of the linked list formed after inserting this new node. The given head pointer may be null, meaning that the initial list is empty.

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
// 3- Otherwise create a temporary pointer to point head, then this pointer should traverse the tree till its next is equal to null.
// 4- When temporary pointer reaches to the last node, create a new Node and assing the data.
// 5- Temporary pointer's next will be newNode and newNode's next will be NULL.
// 6- Return head.

ListNode* insertNodeAtTail(ListNode* head, int data) {
        
    if(head == NULL){
            head = new ListNode(data);
            head->next = NULL;
            return head;
        }

        ListNode* curr = head;
        
        while(curr->next != NULL){
            curr = curr->next;
        }
        
        ListNode* newNode = new ListNode(data);
        curr->next = newNode;
        newNode->next = NULL;
        return head;
}

// Time Complexity: For insertion = O(1) , For traverse all node till end = O(n)
// Space Complexity: O(1)

