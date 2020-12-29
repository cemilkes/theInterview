//
//  238_Product_Of_Array_Except_Self.h
//  TheInterview
//
//  Created by Mr Kes on 12/28/20.
//

#ifndef _38_Product_Of_Array_Except_Self_h
#define _38_Product_Of_Array_Except_Self_h

class Solution_238 {
    
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> vec;
        int multiplicationOfElements = 1;

        if (nums.size() == 1) {
            return nums;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            
            for (int j = 0; j < nums.size(); j++) {
                if ( i == j) {
                    continue;
                }
                multiplicationOfElements *= nums[j];
            }
            vec.push_back(multiplicationOfElements);
            multiplicationOfElements = 1;
        }
        return vec;
    }

};


#endif /* _38_Product_Of_Array_Except_Self_h */
