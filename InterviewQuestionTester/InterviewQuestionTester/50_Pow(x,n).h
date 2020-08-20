//
//  50_Pow(x,n).h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 8/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #50: Pow(x,n)
/* https://leetcode.com/problems/powx-n/
   Implement pow(x, n), which calculates x raised to the power n (i.e. xn).

   Example 1:

   Input: x = 2.00000, n = 10
   Output: 1024.00000

   Example 2:

   Input: x = 2.10000, n = 3
   Output: 9.26100

   Example 3:

   Input: x = 2.00000, n = -2
   Output: 0.25000
   Explanation: 2-2 = 1/22 = 1/4 = 0.25


 Constraints:

       -100.0 < x < 100.0
       -231 <= n <= 231-1

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

//  MARK: - Edge Cases
/*
 *
 *
 **/

//  MARK: - Main Function
 /*
  *
  *
  **/

// Watching Link:
#ifndef _0_Pow_x_n__h
#define _0_Pow_x_n__h
class Solution_50 {
public:
    double myPow(double x, int n) {
        
    // int MIN_LIMIT = pow(-2,31);
    // int MAX_LIMIT = pow(2,31);
        
    double k;
    if (n == 0) {
        return 1;
    }

    if(n == 1){
        return x;
    }else{
        if(n > 0){
            k = x * myPow(x, n-1);
            return k;
        }else{
            n = -n;
            k = x * myPow(x, t-1);
            return 1/k;
        }
    }
        
        // if (x < MIN_LIMIT || x > MAX_LIMIT) {
        //     return 0;
        // }
    }
};

#endif /* _0_Pow_x_n__h */
