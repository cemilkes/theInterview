//
//  217_Contains_Duplicate.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 9/4/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #217: Contains Duplicate
/* https://leetcode.com/problems/contains-duplicate/
 Given an array of integers, find if the array contains any duplicates.

 Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

 Example 1:

 Input: [1,2,3,1]
 Output: true

 Example 2:

 Input: [1,2,3,4]
 Output: false

 Example 3:

 Input: [1,1,1,3,3,4,3,2,4,2]
 Output: true

*/

//  MARK: - Algorithm/Path || Explanation
/*
 *  Using hashset makes to find whether array has duplicate or not, comfortable and efficient.
 *  Traverse all element in the list and add element to the set if it is not being added before.
 *  If it is added, then return true.
 *  Otherwise return false.
 *
 **/

//  MARK: - Time and Space Complexity
/*  Time Complexity is O(n) since traverse all elements in the list. // We do find and insert operation for n times and each operation takes constant time.
 *  Space Complexity is O(n) since used by hashset is linear with the number of elements in it.
 *
 **/

//  MARK: - Edge Cases / Weird Test Cases
/*
 * There is one or no element in the list.
 *
 **/

//  MARK: - Main Function
 /*
  *  vector<int> arr = {1,2,3,3,3};
  *  Solution_217 solution;
  *  bool isContains = solution.containsDuplicate(arr);
  *  cout << isContains << endl;
  **/

// Watching Link: https://www.youtube.com/watch?v=qg0CY00qJqI

#ifndef _17_Contains_Duplicate_h
#define _17_Contains_Duplicate_h
class Solution_217{
public:
  bool containsDuplicate(vector<int>& nums) {
        
      unordered_set<int> hashset;

      for (int number : nums) {
          if (hashset.count(number) > 0) {
              return true;
          }
          hashset.insert(number);
      }

      return false;

    }
    
};

#endif /* _17_Contains_Duplicate_h */
