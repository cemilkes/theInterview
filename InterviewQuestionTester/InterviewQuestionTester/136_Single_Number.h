//
//  136_Single_Number.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 9/4/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #136: Single Number
/* https://leetcode.com/problems/single-number/
 Given a non-empty array of integers, every element appears twice except for one. Find that single one.

 Note:

 Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

 Example 1:

 Input: [2,2,1]
 Output: 1

 Example 2:

 Input: [4,1,2,1,2]
 Output: 4
 
*/

//  MARK: - Algorithm/Path || Explanation
/*
 *  Brute-Force -> use hashset.
 *  Better Approach -> use XOR (Tricky point is a XOR b XOR a = b , and useful XOR equations: a XOR 0 = a, a XOR a = 0)
 *
 *
 *
 **/

//  MARK: - Time and Space Complexity
/*
 *  Using hashset:
 *      Time Complexity is O(n) since we go through all elements in the list.
 *      Space Complexity is O(n) since we use extra space for hashset.
 *
 *  Using XOR
 *      Time Complexity is O(n) since we go through all elements in the list.
 *      Space Complexity is O(1) since we don't use any extra space.
 **/

//  MARK: - Edge Cases / Test Cases
/*
 *  Every element in the array appears twice.
 *  There is one element in the array.
 *
 **/

//  MARK: - Main Function
 /*
  *
  *
  *
  **/

// Watch Link: https://www.youtube.com/watch?v=CvnnCZQY2A0

#ifndef _36_Single_Number_h
#define _36_Single_Number_h
class Solution_136{

public:
    int singleNumber(vector<int>& nums) {
        
        int x = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            x = x ^ nums[i];
        }
        return x;
    }
 
};

#endif /* _36_Single_Number_h */
