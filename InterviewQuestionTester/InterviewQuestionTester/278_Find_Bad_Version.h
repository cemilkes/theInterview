//
//  278_Find_Bad_Version.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 8/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 278: First Bad Version
/* https://leetcode.com/problems/first-bad-version/
   You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

   Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

   You are given an API bool isBadVersion(version) which will return whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

   Example:

   Given n = 5, and version = 4 is the first bad version.

   call isBadVersion(3) -> false
   call isBadVersion(5) -> true
   call isBadVersion(4) -> true

   Then 4 is the first bad version.

*/

//  MARK: - Algorithm/Path || Explanation
/*
 *  Brute Force: It can be started from first version and iterate to next ones till find the bad version but it will take linear time complexity.
 *  To find a bad version in sequence of number, N, I will use binary search since it gets halved the size of sequence in each time.
 **/

//  MARK: - Time and Space Complexity
/*  Time Complexity is O(logN) since we use Binary search algorithm
 *  Space Complexity is O(1) since the amount of memory of our algorithm doesn't depend on the input.
 *
 **/

//  MARK: - Edge Cases
/*
 * n = 0 || n = 1
 *
 **/

//  MARK: - Main Function
 /*
  *
  *
  **/

// Watching Link: https://www.youtube.com/watch?v=SNDE-C86n88

#ifndef _78_Find_Bad_Version_h
#define _78_Find_Bad_Version_h
class Solution_278 {
public:
    
    //Just API definition
    bool isBadVersion(int mid){
        return false;
    }
    
    int firstBadVersion(int n) {
        
        long long int left = 0;
        long long int right = n;
        
        while(left < right){
            
            long long int mid = left + (right - left) / 2;
            if(!isBadVersion(mid)){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
    return left;
    }
};

#endif /* _78_Find_Bad_Version_h */
