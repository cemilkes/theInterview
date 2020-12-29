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
    
    
    vector<int> vec;
    vector<int> vec1 = {1,2,3,4,5};
    Solution_238 solution;
    vec = solution.productExceptSelf(vec1);
    print_Vector(vec);
    
    return 0;
}
