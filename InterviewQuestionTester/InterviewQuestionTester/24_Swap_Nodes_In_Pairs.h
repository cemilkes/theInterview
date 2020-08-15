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
 *  if the string is empty " "
 *  if the string has only one open bracket "{"
 *  if the string has only one closed bracket "}"
    
//  MARK: - Algorithm
    This question can be solved using a Stack data structure.
    1- The idea is that when we see an open bracket, push it to stack.
    2- If we see a closed bracket and it is not opposite bracket from the top of stack or stack is empty then the string is not valid.
    3- Else pop the top. And continue to traverse the string
    4- Check Edge Cases.
 */

//  MARK: - Time and Space Complexity
    //Time Complexity is O(n) because we simply traverse string one character at a time and the stack operations is O(1).
    //Space Complexity is O(n) as we push all opening brackets onto the stack and in the worst case, we will end up pushing all the brackets onto the stack. e.g. ((((((((((.

/*
 //  MARK: - Main Function
 string s = "{";
 Solution_20 solution;
 cout << solution.isValid(s) << endl;
 */


#endif /* _4_Swap_Nodes_In_Pairs_h */
