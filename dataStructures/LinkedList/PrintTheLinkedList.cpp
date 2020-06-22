
// Print the Elements of Linked List

// Given a pointer to the head node of a linked list, print its elements in order, one element per line. If the head pointer is null (indicating the list is empty), don’t print anything.

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
// 2- While head is equal to Null, print the node value and go the next node.

void printLinkedList(SinglyLinkedListNode* head) {
    
    if(head == NULL){ cout<< "Empty List";}
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
    
}

// Time Complexity: O(n) - should go through all the nodes in the linkedlist till reach NULL.

