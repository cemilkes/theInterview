//
//  682_Baseball_Game.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/28/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 682: Baseball Game
/* https://leetcode.com/problems/baseball-game/
     You're now a baseball game point recorder.

    Given a list of strings, each string can be one of the 4 following types:

        Integer (one round's score): Directly represents the number of points you get in this round.
        "+" (one round's score): Represents that the points you get in this round are the sum of the last two valid round's points.
        "D" (one round's score): Represents that the points you get in this round are the doubled data of the last valid round's points.
        "C" (an operation, which isn't a round's score): Represents the last valid round's points you get were invalid and should be removed.

    Each round's operation is permanent and could have an impact on the round before and the round after.

    You need to return the sum of the points you could get in all the rounds.

    Example 1:

    Input: ["5","2","C","D","+"]
    Output: 30
    Explanation:
    Round 1: You could get 5 points. The sum is: 5.
    Round 2: You could get 2 points. The sum is: 7.
    Operation 1: The round 2's data was invalid. The sum is: 5.
    Round 3: You could get 10 points (the round 2's data has been removed). The sum is: 15.
    Round 4: You could get 5 + 10 = 15 points. The sum is: 30.

    Example 2:

    Input: ["5","-2","4","C","D","9","+","+"]
    Output: 27
    Explanation:
    Round 1: You could get 5 points. The sum is: 5.
    Round 2: You could get -2 points. The sum is: 3.
    Round 3: You could get 4 points. The sum is: 7.
    Operation 1: The round 3's data is invalid. The sum is: 3.
    Round 4: You could get -4 points (the round 3's data has been removed). The sum is: -1.
    Round 5: You could get 9 points. The sum is: 8.
    Round 6: You could get -4 + 9 = 5 points. The sum is 13.
    Round 7: You could get 9 + 5 = 14 points. The sum is 27.

    Note:
    The size of the input list will be between 1 and 1000.
    Every integer represented in the list will be between -30000 and 30000.

 */

//  MARK: - Solution

#ifndef _82_Baseball_Game_h
#define _82_Baseball_Game_h
#include "header.h"
class Solution_682 {
public:
    int calPoints(vector<string>& ops) {
        
      int sum = 0;
           stack<int> s;

           for (int i=0; i< ops.size(); i++) {

               if (ops[i] == "+") {
               
                   int top1 = s.top();
                   s.pop();
                   int top2 = s.top();
                   s.pop();
                   int sumOfTops = top1 + top2;
                   
                   sum = sum + sumOfTops;
                   
                   s.push(top2);
                   s.push(top1);
                   s.push(sumOfTops);

               }else if(ops[i] == "D"){
                   
                   int point = s.top()*2;
                   s.push(point);
                   sum = sum + point;
               
               }else if(ops[i] == "C"){
                   
                   sum = sum - s.top();
                   s.pop();
                   
               }else{
                   
                   int x = stoi(ops[i]);
                   s.push(x);
                   int top = s.top();
                   sum = sum + top;
               }
           }
           return sum;
    }
};

//  MARK: - Edge Cases
/*
 *  if the string is empty " "
 *  if the array has only one og these string "C", "D", "+"
 *
    
//  MARK: - Algorithm
    This question may be solved using a stack.
    1- We will go through the array of vector, and check:
        1- if the string is equal to “+” plus mark then sum of last two valid numbers and push them back to the stack again. And add summation to the sum.
        2- if the string is equal to “D” then doubled the last valid score, push to the stack then add to the sum
        3- if the string is equal to “C” then subtract it from the last valid number, and pop that number.
        4- Rest of it will be an integer - convert string to integer and push it to stack and do the summation.
        5- Return sum
 */

//  MARK: - Time and Space Complexity
    //Time Complexity is O(n) because we simply traverse string one character at a time and the stack operations is O(1).
    //Space Complexity is O(n) as we push all opening brackets onto the stack and in the worst case, we will end up pushing all the brackets onto the stack. e.g. {"5", "5", "5", "5", "5"}.

/*
 //  MARK: - Main Function
    Solution_682 solution;
    vector<string> ops = {"5","-2","4"};
    cout << solution.calPoints(ops) << endl;
 */


#endif /* _82_Baseball_Game_h */
