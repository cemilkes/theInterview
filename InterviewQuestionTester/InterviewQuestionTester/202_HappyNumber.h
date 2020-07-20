//
//  202_HappyNumber.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/16/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

/*
Write an algorithm to determine if a number n is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.

Example:

Input: 19
Output: true
Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1

*/



#ifndef _02_HappyNumber_h
#define _02_HappyNumber_h
#include "header.h"

class HappyNumber {
public:
    bool isHappy(int n) {
       
        vector<int> v;
        
        while (n) {
            
            int remainder = n % 10;
            v.push_back(remainder);
            
        }
        
        for (int i = 0; i<v.size()-1; i++) {
            cout << v[i] << " ";
        }
        
        
        return true;
        
    }
};

#endif /* _02_HappyNumber_h */

