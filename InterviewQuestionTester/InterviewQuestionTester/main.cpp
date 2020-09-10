//
//  main.cpp
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.

#include "header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> arr  = {1,2,2,1};
    vector<int> arr2 = {2,2};

    Solution_349 solution;
    solution.intersection(arr, arr2);
    
    
    
    return 0;
}

