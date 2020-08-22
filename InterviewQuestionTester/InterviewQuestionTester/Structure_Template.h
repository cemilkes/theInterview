//
//  Structure_Template.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 8/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

// MARK: - #question: Name
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

#ifndef Structure_Template_h
#define Structure_Template_h

 Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution_206 {
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

#endif /* Structure_Template_h */
