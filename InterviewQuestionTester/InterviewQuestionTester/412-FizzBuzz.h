//
//  Header.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <vector>
#include <string>
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        
        for(int i = 1; i <= n; i++){
            if(i % 5 == 0 && i % 3 == 0){
                v.push_back("FizzBuzz");
                
            }else if(i % 5 == 0){
                v.push_back("Buzz");
                
            }else if(i % 3 == 0){
                v.push_back("Fizz");
                
            }else{
                string s = to_string(i);
                v.push_back(s);
            }
        }
        
     return v;
        
    }
};

#endif /* Header_h */

// Question-412
/*
 Write a program that outputs the string representation of numbers from 1 to n.

 But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

 Example:

 n = 15,

 Return:
 [
     "1",
     "2",
     "Fizz",
     "4",
     "Buzz",
     "Fizz",
     "7",
     "8",
     "Fizz",
     "Buzz",
     "11",
     "Fizz",
     "13",
     "14",
     "FizzBuzz"
 ]

 
 */
