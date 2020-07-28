//
//  20_Valid_Parentheses.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 20: Valid Parentheses
/* https://leetcode.com/problems/valid-parentheses/
 Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

 An input string is valid if:

     Open brackets must be closed by the same type of brackets.
     Open brackets must be closed in the correct order.

 Note that an empty string is also considered valid.

 Example 1:

 Input: "()"
 Output: true

 Example 2:

 Input: "()[]{}"
 Output: true

 Example 3:

 Input: "(]"
 Output: false

 Example 4:

 Input: "([)]"
 Output: false

 Example 5:

 Input: "{[]}"
 Output: true


 */

//  MARK: - Solution

#ifndef _0_Valid_Parentheses_h
#define _0_Valid_Parentheses_h
#include "header.h"

class Solution_20{
public:
     bool isValid(string s) {
         stack<char> c;
         for (int i = 0; i < s.length(); i++) {
             char bracket = s[i];
            
             if (bracket == '(' || bracket == '{' || bracket == '[') {
             
                 c.push(bracket);
             
             }else if(bracket == ')'){
             
                 if (c.empty() || c.top() != '(') {
                     return false;
                 }else{
                     c.pop();
                 }
             
             }else if(bracket == '}'){
               
                 if (c.empty() || c.top() != '{') {
                    return false;
                }else{
                    c.pop();
                }
                 
             }else if(bracket == ']'){
                 
                 if (c.empty() || c.top() != '[') {
                    return false;
                }else{
                    c.pop();
                }
             }
         }
         
         if (s == "") {
             return true;
         }
         
         return c.empty();
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

#endif /* _0_Valid_Parentheses_h */
