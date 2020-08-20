//
//  7_Reverse_Integer.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 7: Reverse Integer
/* https://leetcode.com/problems/reverse-integer/
 Given a 32-bit signed integer, reverse digits of an integer.

 Example 1:

 Input: 123
 Output: 321

 Example 2:

 Input: -123
 Output: -321

 Example 3:

 Input: 120
 Output: 21

 Note:
 Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

 */

//  MARK: - Algorithm/Path || Explanation
/*
 * 1- till x is 0;
 * 2- get the remainder via divided x by 10(divisor)
 * 3- then x is equal to x divided by 10
 * 4- Multiply x (quotient we calculated previous step) by 100 and add to remainder
 * 5- Check Edge Cases.
 **/

//  MARK: - Time and Space Complexity
/*  Time Complexity is O(logn) as we go through the all single numbers by dividing
 *  Space Complexity is O(1)
 *
 **/

//  MARK: - Edge Cases
/*
 *  if the integer is empty " "
 *  if the integer is bigger than 2^31 or less than -2^31
 **/

//  MARK: - Main Function
 /*
  * Solution_7 solution;
  * cout << solution.reverseInteger(15) << endl;
  **/

// Watching Link:

#ifndef __Reverse_Integer_h
#define __Reverse_Integer_h
#include "header.h"
class Solution_7 {

public:

    int reverse(int x) {
        
        int MIN_LIMIT = pow(-2,31);
        int MAX_LIMIT = pow(2,31);

        long long int answer = 0;
        while (x) {
            
            int remainder = x % 10;
            x /= 10;
            answer = answer*10 + remainder;

        }
        
        if (x < 0) {
            answer = answer*(-1);
            
        }
        if (x < MIN_LIMIT || x > MAX_LIMIT) {
            return 0;
        }

           return answer;
    }

};

#endif /* __Reverse_Integer_h */
