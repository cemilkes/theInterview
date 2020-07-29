//
//  225_Implement_Stack_using_Queue.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/29/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 225: Implement Stack using Queue
/* https://leetcode.com/problems/implement-stack-using-queues/
 Implement the following operations of a stack using queues.

     push(x) -- Push element x onto stack.
     pop() -- Removes the element on top of the stack.
     top() -- Get the top element.
     empty() -- Return whether the stack is empty.

 Example:

 MyStack stack = new MyStack();

 stack.push(1);
 stack.push(2);
 stack.top();   // returns 2
 stack.pop();   // returns 2
 stack.empty(); // returns false

 Notes:

     You must use only standard operations of a queue -- which means only push to back, peek/pop from front, size, and is empty operations are valid.
     Depending on your language, queue may not be supported natively. You may simulate a queue by using a list or deque (double-ended queue), as long as you use only standard operations of a queue.
     You may assume that all operations are valid (for example, no pop or top operations will be called on an empty stack).

 */

#ifndef _25_Implement_Stack_using_Queue_h
#define _25_Implement_Stack_using_Queue_h
#include "header.h"

class MyStack {

public:
/** Initialize your data structure here. */
    queue<int> q;

MyStack() {

}

/** Push element x onto stack. */
void push(int x) {
   
    q.push(x);
    
    for (int i = 0; i < q.size()-1; i++) {
        int k = q.front();
        q.pop();
        q.push(k);
    }

}

/** Removes the element on top of the stack and returns that element. */
int pop() {

    int top = q.front();
    q.pop();
    return top;

}

/** Get the top element. */
int top() {
    int top =  q.front();
    return top;
}

/** Returns whether the stack is empty. */
bool empty() {
//    if (q.empty()) {
//        return true;
//    }else{
//        return false;
//    }
    return q.empty();
}
    
};

//  MARK: - Algorithm
/* we need only one queue.
 * push() function: push the element to queue. / then I will create a for loop to reverse the queue for the next operations. It will traverse till before the last element of the queue. For each loop, I will store the first element in a variable, then will use queue' pop() function and push the variable to the queue again. In this way, I keep the first element at the end of the queue to better access.
 * pop() function: store the first element in a variable then use queue' pop function and return the variable.
 * top() function: return the front element of the queue.
 * empty() func: return q.empty() ' boolean result.
 */

//  MARK: - Time and Space Complexity
    //Time Complexity is O(n) for push function. Others are O(1).
    //Space Complexity is O(n) 

#endif /* _25_Implement_Stack_using_Queue_h */
