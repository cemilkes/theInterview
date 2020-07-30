//
//  main.cpp
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/15/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//

#include "header.h"

class MovingAverage {
  
    /** Initialize your data structure here. */
public:
    
    queue<int> q;
    
    int s;
   // int count = 0;
    double sum = 0;
    double average;
    
    MovingAverage(int size) {
        s = size;
        
    }
    
    double next(int val) {
  
        if(q.size() == s){
            q.push(val);
            int front = q.front();
            q.pop();
            average = (sum - front + val) / s;
            
        }else{
            q.push(val);
            sum += val;
            average = sum / q.size();
          //  count = count + 1;
            if(average==0){
                return sum;
            }
        }

        return average;
    }

};


int main(int argc, const char * argv[]) {
    // insert code here...
    MovingAverage m(3);
    
    cout << m.next(12009) << endl;
    cout << m.next(1965) << endl;
    cout << m.next(-940) << endl;
    cout << m.next(-8516) << endl;
    cout << m.next(-16446) << endl;
    cout << m.next(7870) << endl;
    cout << m.next(25545) << endl;
    cout << m.next(-21028) << endl;
    cout << m.next(18430) << endl;
    cout << m.next(-23464) << endl;
    
    return 0;
}
// 12009.00000,
// 6987.00000,
// 4344.66667,
// 1129.50000,
// -2385.60000,
// -3213.40000,
// 1502.60000,
// -2515.00000,
// 2874.20000,
// 1470.60000]
