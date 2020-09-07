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
 *  Will use hashset.
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

// Watching Link:

#ifndef _36_Single_Number_h
#define _36_Single_Number_h
class Solution_136{

public:
    int singleNumber(vector<int>& nums) {
        
        unordered_set<int> hashset;
        vector<int>::iterator itr;
        
        for (itr = nums.begin(); itr != nums.end(); itr++) {
            
        }
        
        
        
        return 1;
    }
 
};

#endif /* _36_Single_Number_h */
