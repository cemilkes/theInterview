//
//  main.cpp
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.

#include "header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> arr = {1,2,3,3,3};
    
    Solution_217 solution;
    bool isContains = solution.containsDuplicate(arr);
    cout << isContains << endl;
    
    
    return 0;
}

