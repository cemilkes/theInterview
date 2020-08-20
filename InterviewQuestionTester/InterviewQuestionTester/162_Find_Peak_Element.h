//
//  162_Find_Peak_Element.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 8/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #162: Find Peak Element
/* https://leetcode.com/problems/find-peak-element/
   A peak element is an element that is greater than its neighbors.

   Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.

   The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.

   You may imagine that nums[-1] = nums[n] = -∞.

   Example 1:

   Input: nums = [1,2,3,1]
   Output: 2
   Explanation: 3 is a peak element and your function should return the index number 2.

   Example 2:

   Input: nums = [1,2,1,3,5,6,4]
   Output: 1 or 5
   Explanation: Your function can return either index number 1 where the peak element is 2,
                or index number 5 where the peak element is 6.

   Follow up: Your solution should be in logarithmic complexity.

*/

//  MARK: - Algorithm/Path || Explanation
/*
 *  Brute Force approach is that traverse the array from the second element and check each element's left and right whether meets the condition. O(n)
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
/*  Array has only one or two element
 *  Array has three elements and not meet the condition
 *
 **/

//  MARK: - Main Function
 /*
  *
  *
  **/

// Watching Link:
#ifndef _62_Find_Peak_Element_h
#define _62_Find_Peak_Element_h
class Solution_162 {
public:
    int findPeakElement(vector<int>& nums) {
        
    }
};

#endif /* _62_Find_Peak_Element_h */
