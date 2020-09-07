//
//  1_Two_Sum.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/28/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #1: Two Sum
/* https://leetcode.com/problems/two-sum/
 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

 You may assume that each input would have exactly one solution, and you may not use the same element twice.

 You can return the answer in any order.

  

 Example 1:

 Input: nums = [2,7,11,15], target = 9
 Output: [0,1]
 Output: Because nums[0] + nums[1] == 9, we return [0, 1].

 Example 2:

 Input: nums = [3,2,4], target = 6
 Output: [1,2]

 Example 3:

 Input: nums = [3,3], target = 6
 Output: [0,1]

  

 Constraints:

     2 <= nums.length <= 105
     -109 <= nums[i] <= 109
     -109 <= target <= 109
     Only one valid answer exists
 
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

//  MARK: - Edge Cases / Test Cases
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

#ifndef __Two_Sum_h
#define __Two_Sum_h
#include "header.h"

class Solution_1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap.insert(make_pair(i, nums[i]));
        }
        
        for (int key: nums) {
            
        }
        
        
        
        return nums;
    }
};


#endif /* __Two_Sum_h */
