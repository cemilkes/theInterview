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

#ifndef _4_Swap_Nodes_In_Pairs_h
#define _4_Swap_Nodes_In_Pairs_h
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
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
};
//  MARK: - Edge Cases
/*
 *  if the list is empty or has only one node
    
//  MARK: - Algorithm
 
 

//  MARK: - Time and Space Complexity



 //  MARK: - Main

*/


#endif /* _4_Swap_Nodes_In_Pairs_h */
