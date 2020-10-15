//
//  704_Binary_Search.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 8/18/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 704: Binary Search
/* https://leetcode.com/problems/binary-search/
 Given a sorted (in ascending order) integer array nums of n elements and a target value, write a function to search target in nums. If target exists, then return its index, otherwise return -1.


 Example 1:

 Input: nums = [-1,0,3,5,9,12], target = 9
 Output: 4
 Explanation: 9 exists in nums and its index is 4

 Example 2:

 Input: nums = [-1,0,3,5,9,12], target = 2
 Output: -1
 Explanation: 2 does not exist in nums so return -1

  

 Note:

     You may assume that all elements in nums are unique.
     n will be in the range [1, 10000].
     The value of each element in nums will be in the range [-9999, 9999].

 */

#ifndef _04_Binary_Search_h
#define _04_Binary_Search_h
class Solution_704 {
public:
    int search(vector<int>& nums, int target) {
        int max = nums.size() - 1;
        int min = 0;
        int mid;
        while(min <= max){
            
            mid = (min + max) / 2;
           
            if(nums[mid] == target){
                
                return mid;
            
            }else if(nums[mid] > target){
            
                max = mid - 1;
            
            }else{
                
                min = mid + 1;
            }
        }
        return -1;
    }
};

#endif /* _04_Binary_Search_h */
//  MARK: - Edge Cases
/*
 *  if the array is empty " "
 *  if the integer has only 1 or 2 element
    
//  MARK: - Algorithm
    1-
    2-
    3-
    4-
    5- 
 */

//  MARK: - Time and Space Complexity
    //Time Complexity is O(logn)
    //Space Complexity is O(1) for iterative function // For recursive calls, it is O(logn)

/*
 //  MARK: - Main Function
 vector<int> v = {1,2,4,6,8,9,17,28};
 Solution_704 solution;
 cout << solution.search(v, 17) << endl;
 */
