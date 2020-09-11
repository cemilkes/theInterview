//
//  202_HappyNumber.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/16/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

// MARK: - #202: Happy Number
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

// Watch Link:

#ifndef _02_HappyNumber_h
#define _02_HappyNumber_h

class HappyNumber {
public:
    bool isHappy(int n) {
        
        vector<int> digits = getDigits(n);
        unordered_set<int> set;
        int sum = 0;
        
        
        while (sum != 1) {
            for (int i = 0; i < digits.size(); i++) {
                sum = sum + digits[i]*digits[i];
            }
            if (sum == 1) {
                return true;
            }
            
            if (set.find(sum) != set.end()) {
                return false;
            }
            
            cout << "Sum is: " << sum << endl;
            set.insert(sum);
            
            cout << "Set elements: " << endl;
            for (int x : set) {
                cout <<  x << " ";
            }
            
            cout << endl;
            digits = getDigits(sum);
            sum = 0;

        }

        return true;
        
    }
    
    vector<int> getDigits(int num){

        vector<int> vec;

        while (num != 0) {
            int remainder = num % 10;
            vec.push_back(remainder);
            num = num / 10;
        }

        
        for (int i =0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        
        return vec;
    }
    
    
};

#endif /* _02_HappyNumber_h */

