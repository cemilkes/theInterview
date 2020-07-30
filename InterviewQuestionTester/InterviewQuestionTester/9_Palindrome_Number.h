//
//  9_Palindrome_Number.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/30/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 9: Palindrome Number
/* https://leetcode.com/problems/palindrome-number/
 Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

 Example 1:

 Input: 121
 Output: true

 Example 2:

 Input: -121
 Output: false
 Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

 Example 3:

 Input: 10
 Output: false
 Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

 Follow up:

 Coud you solve it without converting the integer to a string?

 
 */

#ifndef __Palindrome_Number_h
#define __Palindrome_Number_h
class Solution_9 {
public:
    bool isPalindrome(int x) {
        
        int reversedX = 0;
              int y = x;
              if (x < 0) {
                  return false;
              }
              
              while (x) {
                  int remainder = x % 10;
                  x /= 10;
                  reversedX = reversedX*10  + remainder;
              }
           
              if(y == reversedX){
                  return true;
              }

              return false;
    }
};

#endif /* __Palindrome_Number_h */
//  MARK: - Edge Cases
/*
 *  if the integer is negative then return false
    
//  MARK: - Algorithm
    1- Use reverse Integer function and check only reversed number is equal to x.
 */

//  MARK: - Time and Space Complexity
    //Time Complexity is O(logn) since we divided the input by 10 for every iteration
    //Space Complexity is O(1)

/*
 //  MARK: - Main Function
 Solution_9 solution;
 cout << solution.isPalindrome(121) << endl;
 */

/*
 if(x<0|| (x!=0 &&x%10==0)) return false;
 int sum=0;
 while(x>sum)
 {
     sum = sum*10+x%10;
     x = x/10;
 }
 return (x==sum)||(x==sum/10);
 */
