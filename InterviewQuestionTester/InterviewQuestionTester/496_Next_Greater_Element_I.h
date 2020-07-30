//
//  496_Next_Greater_Element_I.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/27/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 496: Next Greater Element I
/* https://leetcode.com/problems/next-greater-element-i/
  You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.

 The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.

 Example 1:

 Input: nums1 = [4,1,2], nums2 = [1,3,4,2].
 Output: [-1,3,-1]
 Explanation:
     For number 4 in the first array, you cannot find the next greater number for it in the second array, so output -1.
     For number 1 in the first array, the next greater number for it in the second array is 3.
     For number 2 in the first array, there is no next greater number for it in the second array, so output -1.

 Example 2:

 Input: nums1 = [2,4], nums2 = [1,2,3,4].
 Output: [3,-1]
 Explanation:
     For number 2 in the first array, the next greater number for it in the second array is 3.
     For number 4 in the first array, there is no next greater number for it in the second array, so output -1.

 Note:

     All elements in nums1 and nums2 are unique.
     The length of both nums1 and nums2 would not exceed 1000.

 */

//  MARK: - Solution

#ifndef _96_Next_Greater_Element_I_h
#define _96_Next_Greater_Element_I_h
#include "header.h"

class Solution_496{
public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         
//        
//     }

};

//  MARK: - Edge Cases
/*
 *  if both arrays are empty " ".
 *  if the num1 is empty.
 *  if both num1 and num2 have same amount of element.
    
//  MARK: - Algorithm
    This question can be solved using a Stack data structure.
    1- The idea is that when we see an open bracket, push it to stack.
    2- If we see a closed bracket and it is not opposite bracket from the top of stack or stack is empty then the string is not valid.
    3- Else pop the top. And continue to traverse the string
    4- Check Edge Cases.
 */

//  MARK: - Time and Space Complexity
    //Time Complexity is O(n) because we simply traverse string one character at a time and the stack operations is O(1).
    //Space Complexity is O(n) as we push all opening brackets onto the stack and in the worst case, we will end up pushing all the brackets onto the stack. e.g. ((((((((((.

/*
 //  MARK: - Main Function
 string s = "{";
 Solution_20 solution;
 cout << solution.isValid(s) << endl;
 */

#endif /* _96_Next_Greater_Element_I_h */
