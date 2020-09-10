//
//  206_Reverse_Linked_List.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 8/22/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #206: Reverse Linked List
/* https://leetcode.com/problems/reverse-linked-list/
 
   Reverse a singly linked list.

   Example:

   Input: 1->2->3->4->5->NULL
   Output: 5->4->3->2->1->NULL

   Follow up:

   A linked list can be reversed either iteratively or recursively. Could you implement both?

*/

//  MARK: - Algorithm/Path || Explanation
/*
 *  Iteratively:
 *  Create a temp node 'prev' and point it head node. And create other temp node named 'curr' and point it to prev->next.
 *  Connect prev node's next to curr' next node. (prev->next = curr->next)
 *  Point curr's next to prev' node. (curr->next = prev)
 *  Now, curr should be assingned to head.  (head = curr)
 *  And curr will be assigned by prev->next (curr = prev->next)
 *
 *  Recursively:
 *
 *
 *
 **/

//  MARK: - Time and Space Complexity
/*
 *  Iteratively:
 *  Time Complexity is O(n) - since we traverse all member of linked list
 *  Space Complexity is O(1) - only used 2 extra pointer.
 *
 *  Recursively:
 *  Time Complexity is O(n) - since we traverse all member of linked list
 *  Space Complexity is O(1) - only used 2 extra pointer.
 *
 *
 **/

//  MARK: - Edge Cases / Test Cases
/*
 *  check if head or head->next is null
 *
 **/

// Watch:

#ifndef _06_Reverse_Linked_List_h
#define _06_Reverse_Linked_List_h

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* prev = head;
        ListNode* curr = prev -> next;
        
        while(curr != NULL){
            prev -> next = curr -> next;
            curr -> next = head;
            head = curr;
            curr = prev -> next;
        }
        
        return head;
    }
};

#endif /* _06_Reverse_Linked_List_h */
