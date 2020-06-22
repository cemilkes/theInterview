
// Print In Reverse

// You are given the pointer to the head node of a linked list and you need to print all its elements in reverse order from tail to head, one element per line. The head pointer may be null meaning that the list is empty - in that case, do not print anything!

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



void reversePrint(ListNode* head) {
    if (head == NULL){
        return;
    }
    reversePrint(head -> next);
    cout << head->data << endl;

}

// Time Complexity: For insertion = O(n)


