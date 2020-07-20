//
//  20_Valid_Parentheses.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

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

// edge cases: " ", "{",


#endif /* _0_Valid_Parentheses_h */
