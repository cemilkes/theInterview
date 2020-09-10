//
//  349_Intersection_Of_Two_Arrays.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 9/10/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #349: Intersection of Two Arrays
/* https://leetcode.com/problems/intersection-of-two-arrays/
 Given two arrays, write a function to compute their intersection.

 Example 1:

 Input: nums1 = [1,2,2,1], nums2 = [2,2]
 Output: [2]

 Example 2:

 Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 Output: [9,4]

 Note:

     Each element in the result must be unique.
     The result can be in any order.

*/

//  MARK: - Algorithm/Path || Explanation
/*
 *  Brute Force:
 *  Starting from first element in the first array, traverse the second array and check if there are any equivalents.
 *  If found it then put that element to a set.
 *  After grabbing all elements in the first array, return set elements.
 *
 *  Better Approach:
 *  Put all elements in the first array to a set
 *  Then go through all the elements in the second array and if set has the element, add the element to a vector and erase the element from the set.
 *
 
 **/

//  MARK: - Time and Space Complexity
/*
 *  Brute Force:
 *  Time Complexity is O(n * m) - n is size of the first array, and m is size of the second array,
 *  Space Complexity is O(n)
 *
 *  Better Approach
 *  Time Complexity is O(n * m) - n is size of the first array, and m is size of the second array,
 *  Space Complexity is O(n)
 *
 **/

//  MARK: - Edge Cases / Test Cases
/*
 *  if any of the arrays is empty then return empty array
 *
 **/

//  MARK: - Main Function
 /*
  *
  *
  **/

// Watch Link:

#ifndef _49_Intersection_Of_Two_Arrays_h
#define _49_Intersection_Of_Two_Arrays_h
class Solution_349 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        if (nums1.empty() || nums2.empty()) {
            return vector<int>();
        }
        
        unordered_set<int> hashset(nums1.begin(), nums1.end());
        vector<int> vector;

        for (int x : nums2) {
            if (hashset.count(x)) {
                vector.push_back(x);
                hashset.erase(x);
            }
        }
        return vector;

        
//        unordered_set<int> hashset;
//        vector<int> vector;
//
//        for (int i = 0; i < nums1.size(); i++) {
//            for (int j = 0; j < nums2.size(); j++) {
//                if (nums1[i] == nums2[j]) {
//                    hashset.insert(nums1[i]);
//                }
//            }
//        }
//
//        for (int nums: hashset) {
//            vector.push_back(nums);
//        }
//
//        return vector;
    }
};

#endif /* _49_Intersection_Of_Two_Arrays_h */
