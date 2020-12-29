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
#include "88_Merge_Sorted_Arrays.h"
#include "136_Single_Number.h"
#include "238_Product_Of_Array_Except_Self.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<int> v1 = {1,3,8,9,45};
    vector<int> v2 = {1,2,7,11,55};
    Helper helper;
    Solution_88 solution;
    
    solution.merge(v1, 10, v2, 5);
    helper.print_Vector(v1);
    
    
    return 0;
}
