//
//  344_Reverse_String.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 20: Reverse String
/* https://leetcode.com/problems/reverse-string/
 Write a function that reverses a string. The input string is given as an array of characters char[].

 Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

 You may assume all the characters consist of printable ascii characters.

  
 Example 1:

 Input: ["h","e","l","l","o"]
 Output: ["o","l","l","e","h"]

 Example 2:

 Input: ["H","a","n","n","a","h"]
 Output: ["h","a","n","n","a","H"]
 
 */

#ifndef _44_Reverse_String_h
#define _44_Reverse_String_h
class Solution_314 {
public:
    void reverseString(vector<char>& s) {
         for(int i = 0; i < s.size() / 2; i++){
            swap(s[i], s[s.size() - i - 1]);
        }
    }
};

#endif /* _44_Reverse_String_h */
