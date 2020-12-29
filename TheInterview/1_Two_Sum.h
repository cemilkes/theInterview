//
//  1_Two_Sum.h
//  TheInterview
//
//  Created by Mr Kes on 12/29/20.
//

#ifndef __Two_Sum_h
#define __Two_Sum_h
class Solution_1{

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector< int > vec;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (target == (nums[i] + nums[j])) {
                    vec.push_back(nums[i]);
                    vec.push_back(nums[j]);
                }
            }
        }
        return vec;
        
    }
};

#endif /* __Two_Sum_h */
