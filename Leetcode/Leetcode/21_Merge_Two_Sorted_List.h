//
//  21_Merge_Two_Sorted_List.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 8/22/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #question: Name
/* https://leetcode.com/problems/merge-two-sorted-lists/
 Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.

 Example:

 Input: 1->2->4, 1->3->4
 Output: 1->1->2->3->4->4
 
*/

//  MARK: - Algorithm/Path || Explanation
/*
 *
 *
 *
 *
 *
 **/

//  MARK: - Time and Space Complexity
/*  Time Complexity is
 *  Space Complexity is
 *
 **/

//  MARK: - Edge Cases / Weird Test Cases
/*
 *
 *
 **/

//  MARK: - Main Function
 /*
  *
  *
  **/

// Watching Link:
#ifndef _1_Merge_Two_Sorted_List_h
#define _1_Merge_Two_Sorted_List_h

//Definiton for singly-linked list
class ListNode {
   int data;
   ListNode *next;
   ListNode(int x) {
     data = x;
     next = NULL;
   }
}

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
       
        ListNode* temp = head;
        
        while(temp->next != NULL && temp != NULL){
            
            if(temp->val == temp->next->val){
                ListNode* trash = temp->next;
                temp->next = temp->next->next;
                delete trash;
            }else{
                temp = temp->next;
            }
            
        }
        return head;

    }
};

#endif /* _1_Merge_Two_Sorted_List_h */
