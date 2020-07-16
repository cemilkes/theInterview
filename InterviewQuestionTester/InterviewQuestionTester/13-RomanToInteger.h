//
//  13-RomanToInteger.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

#ifndef _3_RomanToInteger_h
#define _3_RomanToInteger_h
#include <iostream>
#include <string>
using namespace std;
class Solution_13 {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.size();) {
            
            if (s[i] == 'I') {
                if(s[i+1] == 'V'){
                    sum = sum + 4;
                    i = i+2;
                }
                else if(s[i+1] == 'X'){
                    sum = sum + 9;
                    i = i+2;
                }else{
                    sum = sum + 1;
                    i++;
                }
            }else if(s[i] == 'V'){
                sum = sum + 5;
                i++;
            
            }else if(s[i] == 'X'){
                if(s[i+1] == 'L'){
                    sum = sum + 40;
                    i = i+2;
                }
                else if(s[i+1] == 'C'){
                    sum = sum + 90;
                    i = i+2;
                }else{
                    sum = sum + 10;
                    i++;
                }
            
            }else if(s[i] == 'L'){
                sum = sum + 50;
                i++;
            
            }else if(s[i] == 'C'){
                if(s[i+1] == 'D'){
                    sum = sum + 400;
                    i = i+2;
                }
                else if(s[i+1] == 'M'){
                    sum = sum + 900;
                    i = i+2;
                }else{
                    sum = sum + 100;
                    i++;
                }
            
            }else if(s[i] == 'D'){
                sum = sum + 500;
                i++;
            
            }else if (s[i] == 'M'){
                sum = sum + 1000;
                i++;
            }
        }
        
        
        return sum;
        
    }
};





#endif /* _3_RomanToInteger_h */


// Question-13; https://leetcode.com/problems/roman-to-integer/
/*
 Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

 Symbol       Value
 I             1
 V             5
 X             10
 L             50
 C             100
 D             500
 M             1000

 For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

 Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

     I can be placed before V (5) and X (10) to make 4 and 9.
     X can be placed before L (50) and C (100) to make 40 and 90.
     C can be placed before D (500) and M (1000) to make 400 and 900.

 Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

 Example 1:

 Input: "III"
 Output: 3

 Example 2:

 Input: "IV"
 Output: 4

 Example 3:

 Input: "IX"
 Output: 9

 Example 4:

 Input: "LVIII"
 Output: 58
 Explanation: L = 50, V= 5, III = 3.

 Example 5:

 Input: "MCMXCIV"
 Output: 1994
 Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.


 
 */
