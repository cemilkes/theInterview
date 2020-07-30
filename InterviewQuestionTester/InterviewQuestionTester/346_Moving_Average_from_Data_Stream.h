//
//  346_Moving_Avarage_from_Data_Stream.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/30/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 20: Moving Average from Data Stream
/* https://leetcode.com/problems/moving-average-from-data-stream/
 Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window.

 Example:

 MovingAverage m = new MovingAverage(3);
 m.next(1) = 1
 m.next(10) = (1 + 10) / 2
 m.next(3) = (1 + 10 + 3) / 3
 m.next(5) = (10 + 3 + 5) / 3
 */

#ifndef _46_Moving_Avarage_from_Data_Stream_h
#define _46_Moving_Avarage_from_Data_Stream_h
#include "header.h"

//class MovingAverage {
//  
//    /** Initialize your data structure here. */
//    queue<int> q;
//    int s;
//    MovingAverage(int size) {
//        s = size;
//    }
//    
//    double next(int val) {
//        
//        int count = 0;
//        int sum = 0;
//        int average = 0;
//        
//        while (count < s) {
//            
//            q.push(val);
//            sum += val;
//            average = sum / count;
//            count = count + 1;
//       
//        }
//        
//        int front = q.front();
//        q.pop();
//        average = (sum - front + val) / s;
//        
//
//        return average;
//    }
//    
//    
//    
//    
//};

#endif /* _46_Moving_Avarage_from_Data_Stream_h */
