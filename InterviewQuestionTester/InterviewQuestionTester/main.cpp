//
//  main.cpp
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

#include "header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    //  MARK: - 20 Valid Parentheses
    string s = "{";
    Solution_20 solution;
    cout << solution.isValid(s) << endl;
    
    //  MARK: - 202 Happy Number
    //HappyNumber hp;
    //hp.isHappy(11);
//    vector<int> v;
//    int n = 19;
//    //int sum = 0;
//    int subSum = 0;
//    while (subSum == 1) {
//        while (n) {
//
//            int remainder = n % 10;
//            v.push_back(remainder);
//            n = n/10;
//        }
//
//        for (int i = 0; i<v.size(); i++) {
//            cout << v[i] << " ";
//            subSum = subSum + v[i];
//        }
//        n = subSum;
//    }
//
//    cout << subSum;
    return 0;
}
