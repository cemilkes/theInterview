//
//  155_Min_Stack.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 155: Min Stack
/* https://leetcode.com/problems/min-stack/
 Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

     push(x) -- Push element x onto stack.
     pop() -- Removes the element on top of the stack.
     top() -- Get the top element.
     getMin() -- Retrieve the minimum element in the stack.

  

 Example 1:

 Input
 ["MinStack","push","push","push","getMin","pop","top","getMin"]
 [[],[-2],[0],[-3],[],[],[],[]]

 Output
 [null,null,null,null,-3,null,0,-2]

 Explanation
 MinStack minStack = new MinStack();
 minStack.push(-2);
 minStack.push(0);
 minStack.push(-3);
 minStack.getMin(); // return -3
 minStack.pop();
 minStack.top();    // return 0
 minStack.getMin(); // return -2


 Constraints:

     Methods pop, top and getMin operations will always be called on non-empty stacks.

 */

#ifndef _55_Min_Stack_h
#define _55_Min_Stack_h
#include "header.h"

class Solution_155 {
    
    public:
     /** initialize your data structure here. */
      stack<int> s;
      stack<int> minS;
      int min;
     
     MinStack() {
        
     }
     
     void push(int x) {
    
         s.push(x);
         if(minS.empty() || x <= getMin()){
             minS.push(x);
         }
     }
     
     void pop() {
         if(s.top() == getMin()){
             minS.pop();
         }
         s.pop();
     }
     
     int top() {
         return s.top();
     }
     
     int getMin() {
         return minS.top();
     }
    
};

#endif /* _55_Min_Stack_h */

