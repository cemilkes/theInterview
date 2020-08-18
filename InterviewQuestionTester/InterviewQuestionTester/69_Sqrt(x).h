//
//  69_Sqrt(x).h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 8/18/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 69: Sqrt(x)
/* https://leetcode.com/problems/sqrtx/
 Implement int sqrt(int x).

 Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

 Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

 Example 1:

 Input: 4
 Output: 2

 Example 2:

 Input: 8
 Output: 2
 Explanation: The square root of 8 is 2.82842..., and since
              the decimal part is truncated, 2 is returned.

 */

#ifndef _9_Sqrt_x__h
#define _9_Sqrt_x__h
class Solution_69 {
public:
    int mySqrt(int x) {
        
        //finding maximum k such that k*k <=x;
        long long int left = 0;
        long long int right = x;
        
        while(left < right)
        {
            long long int mid = left + (right - left + 1) / 2;
            if(mid*mid <= (long long )x)
                left = mid;
            else
                right = mid-1;
        }
        return left;
    }
};

#endif /* _9_Sqrt_x__h */
//  MARK: - Edge Cases
/*
 *  if the number is smaller than 2
 *
 *
    
//  MARK: - Algorithm
    

//  MARK: - Time and Space Complexity
    //Time Complexity is O(logn)
    //Space Complexity is O(1)
 */
