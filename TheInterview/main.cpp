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
#include "238_Product_Of_Array_Except_Self.h"
#include "136_Single_Number.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Helper helper;
    Solution_136 solution;
    
    int x;
    vector<int> vec = {1, 1, 2, 9, 9};
    x = solution.singleNumber_XOR(vec);
    cout << x << endl;
    
    
    return 0;
}
