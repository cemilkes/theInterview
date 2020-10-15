//
//  283_Move-Zeroes.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/30/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 283: Move Zeroes
/* https://leetcode.com/problems/move-zeroes/
 Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

 Example:

 Input: [0,1,0,3,12]
 Output: [1,3,12,0,0]

 Note:

     You must do this in-place without making a copy of the array.
     Minimize the total number of operations.
*/

#ifndef _83_Move_Zeroes_h
#define _83_Move_Zeroes_h
class Solution_283 {
public:
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
};

#endif /* _83_Move_Zeroes_h */

//  MARK: - Edge Cases
/*
 *  if the vector is empty " "
 *  if the vector is all zero
 *
    
//  MARK: - Algorithm
    
    1- The idea is that when we see an open bracket, push it to stack.
    2- If we see a closed bracket and it is not opposite bracket from the top of stack or stack is empty then the string is not valid.
    3- Else pop the top. And continue to traverse the string
    4- Check Edge Cases.
 */

//  MARK: - Time and Space Complexity
    //Time Complexity is O(n) because we simply traverse string one character at a time.
    //Space Complexity is O(1)

/*
 //  MARK: - Main Function
 
 Solution_20 solution;
 cout << solution.isValid(s) << endl;
 */
