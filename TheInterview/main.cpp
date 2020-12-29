//
//  main.cpp
//  TheInterview
//
//  Created by Mr Kes on 12/28/20.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include "Helper.h"
#include "1_Two_Sum.h"
#include "88_Merge_Sorted_Arrays.h"
#include "136_Single_Number.h"
#include "238_Product_Of_Array_Except_Self.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Solution_1 solution;
    Helper helper;
    vector<int> vec = {1,2,4,5,7,8};
    vector<int> vec2;
    vec2 = solution.twoSum(vec, 13);
    helper.print_Vector(vec2);
    
    
    return 0;
}
