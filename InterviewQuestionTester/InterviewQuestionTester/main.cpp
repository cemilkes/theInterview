//
//  main.cpp
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

#include <iostream>
using namespace std;
#include "412-FizzBuzz.h"
#include "13-RomanToInteger.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Solution_13 solution;
    int sum = solution.romanToInt("MCMXCIV");
    cout << sum << endl;
//    string s = "Cemil";
//    cout << s[0] << endl;
//    cout << s.size() << endl;
//    if (s[0] == 'C') {
//        cout << "Ce" << endl;
//    }
    
    
    /* //  MARK: - FIZZBUZZ
     *vector<string> v = solution.fizzBuzz(15);
     *  for(int i = 0; i < v.size(); i++) {
     *   cout <<  v[i] << endl;
     *  }
     */

    return 0;
}
