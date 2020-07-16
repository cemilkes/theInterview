//
//  main.cpp
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

#include "header.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //  MARK: - Happy Number
    //HappyNumber hp;
    //hp.isHappy(11);
    vector<int> v;
    int n = 19;
    //int sum = 0;
    int subSum = 0;
    while (subSum == 1) {
        while (n) {
            
            int remainder = n % 10;
            v.push_back(remainder);
            n = n/10;
        }
        
        for (int i = 0; i<v.size(); i++) {
            cout << v[i] << " ";
            subSum = subSum + v[i];
        }
        n = subSum;
    }
    
    cout << subSum;
    
    //  MARK: - Roman To Integer
    /*
    RomanToInteger solution;
    int sum = solution.romanToInt("MCMXCIV");
    cout << sum << endl;
     */

    //    string s = "Cemil";
//    cout << s[0] << endl;
//    cout << s.size() << endl;
//    if (s[0] == 'C') {
//        cout << "Ce" << endl;
//    }
    
    //  MARK: - FizzBuzz
    /*
     *vector<string> v = solution.fizzBuzz(15);
     *  for(int i = 0; i < v.size(); i++) {
     *   cout <<  v[i] << endl;
     *  }
     */

    return 0;
}
