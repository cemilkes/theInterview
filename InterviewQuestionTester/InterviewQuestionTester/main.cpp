//
//  main.cpp
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.

#include "header.h"

void moveZeroes(vector<int>& nums) {
      
    int size = nums.size();
    for(int i = 0; i < size; i++){
            if(nums.at(i) == 0){
                nums.push_back(0);
                nums.erase(nums.begin()+i);
                i--;
                size--;
            }
        }
        if(size == 0){
            return;
        }
        
        for (int i =0; i<nums.size(); i++) {
            cout << nums[i] << endl;
        }
  }



int main(int argc, const char * argv[]) {
    // insert code here...
   
    vector<int> v = {1,0,0,0,3};
    moveZeroes(v);
    
    return 0;
}

