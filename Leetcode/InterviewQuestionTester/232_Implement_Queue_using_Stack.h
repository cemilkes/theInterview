//
//  232_Implement_Queue_using_Stack.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/29/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 225: Implement Queue using Stack
/*
 Implement the following operations of a queue using stacks.

     push(x) -- Push element x to the back of queue.
     pop() -- Removes the element from in front of queue.
     peek() -- Get the front element.
     empty() -- Return whether the queue is empty.

 Example:

 MyQueue queue = new MyQueue();

 queue.push(1);
 queue.push(2);
 queue.peek();  // returns 1
 queue.pop();   // returns 1
 queue.empty(); // returns false

 Notes:

     You must use only standard operations of a stack -- which means only push to top, peek/pop from top, size, and is empty operations are valid.
     Depending on your language, stack may not be supported natively. You may simulate a stack by using a list or deque (double-ended queue), as long as you use only standard operations of a stack.
     You may assume that all operations are valid (for example, no pop or peek operations will be called on an empty queue).

 */
#ifndef _32_Implement_Queue_using_Stack_h
#define _32_Implement_Queue_using_Stack_h
class MyQueue {
public:
    
    stack<int> s1;
    stack<int> s2;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        
        s1.push(x);
        
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int popped = s1.top();
        s1.pop();
        return popped;
    }
    
    /** Get the front element. */
    int peek() {
        int top = s1.top();
        return top;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};

#endif /* _32_Implement_Queue_using_Stack_h */
