//
//  24_Swap_Nodes_In_Pairs.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 8/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 24: Swap Nodes In Pairs
/*
 Given a linked list, swap every two adjacent nodes and return its head.

 You may not modify the values in the list's nodes, only nodes itself may be changed.

 Example:

 Given 1->2->3->4, you should return the list as 2->1->4->3.
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

// Watching Link: https://medium.com/@jimdaosui/swap-nodes-in-pairs-67b311fd02f7
//https://www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list-by-changing-links/?ref=rp
//https://www.geeksforgeeks.org/pairwise-swap-adjacent-nodes-of-a-linked-list-by-changing-pointers-set-2/

#ifndef _4_Swap_Nodes_In_Pairs_h
#define _4_Swap_Nodes_In_Pairs_h

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
    ListNode* swapPairs(ListNode* head) {
    
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* curr = head->next->next;
        ListNode* prev= head;
        head = head->next;
        head->next= prev;
        
        while (curr != NULL && curr->next !=NULL) {
            
            prev->next = curr->next;
            
            prev = curr;
           
            ListNode* next = curr->next->next;
            
            curr->next->next = curr;
            
            curr = next;
        }
        
        prev->next = curr;
      
        return head;
    }
};
    
#endif /* _4_Swap_Nodes_In_Pairs_h */


/* Recursive
 if(head == NULL || head->next == NULL){
      return head;
  }
 
  ListNode* temp = head;
     head = head->next;
     temp->next = head->next;
     head->next = temp;
     
     head->next->next = swapPairs(head->next->next);
     return head;

 }
 */
