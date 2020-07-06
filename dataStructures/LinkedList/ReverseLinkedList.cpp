
// Reverse Linked List

// You’re given the pointer to the head node of a linked list. Change the next pointers of the nodes so that their order is reversed. The head pointer given may be null meaning that the initial list is empty.

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



void reverse(ListNode* head) {
    if (head == NULL){
        return;
    }
    reversePrint(head -> next);
    cout << head->data << endl;

}

// Time Complexity: For insertion = O(n)


