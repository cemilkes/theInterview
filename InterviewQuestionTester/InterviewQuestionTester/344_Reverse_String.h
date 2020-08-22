//
//  344_Reverse_String.h
//  InterviewQuestionTester
//
//  Created by Cemil Keş on 7/20/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - 20: Reverse String
/* https://leetcode.com/problems/reverse-string/
 Write a function that reverses a string. The input string is given as an array of characters char[].

 Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

 You may assume all the characters consist of printable ascii characters.

  
 Example 1:

 Input: ["h","e","l","l","o"]
 Output: ["o","l","l","e","h"]

 Example 2:

 Input: ["H","a","n","n","a","h"]
 Output: ["h","a","n","n","a","H"]
 
 */
//  MARK: - Algorithm/Path || Explanation
/*
 *  starting from beginning, swap first and last element, and pass next element at each time.
 *  Let's say vector is {1, 2, 3, 7, 4, 6}, swap 1-6, then 2-4 and continue till there is no element to swap. (vector.size / 2)
 **/

//  MARK: - Time and Space Complexity
/*
 *  Time Complexity is O(N)- Have N/2 steps for swapping - O(N), swap operation itself O(1) -> Overall O(N)
 *  Space Complexity is O(1) since we don't use extra memory.
 **/

//  MARK: - Edge Cases / Weird Test Cases
/*
 *  There is no element in vector or 1 or 2 element only.
 *
 **/

//  MARK: - Main Function
 /*
  * vector<char> v = {'a', 'b', 'e', 'd', 'k'};
  * vector<char> v1 = {'a', 'b'};
  * vector<char> v2 = {'a'};
  * reverseString(v);
  * reverseString(v1);
  * reverseString(v2);
  **/

// Watching Link:
#ifndef _44_Reverse_String_h
#define _44_Reverse_String_h
class Solution_314 {
public:
    void reverseString(vector<char>& s) {
         for(int i = 0; i < s.size() / 2; i++){
            swap(s[i], s[s.size() - i - 1]);
        }
        //withRecursive
        //reverseStringHelper(s, 0, s.size() - 1);
    }
    
    //Recursive Helper
    void reverseStringHelper(vector<char>& v, int start, int end){
        if (start >= end) {
            return;
        }else{
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            
            reverseStringHelper(v, start+1, end-1);
        }
      }
};

/*
 string reverseString(string s) {
     return { s.rbegin(), s.rend() };
 
 or
 
 // string ret;
 for(int i = s.size()-1; i >= 0; --i)
     ret += s[i];
 return ret; //
 }
 */

/*
 // O(N) space complexity
 void printReverse(const char *str){
     
     if (!*str) {
         return;
     }
     printReverse(str+1);
     putchar(*str);
     
 }
 // O(1) space complexity
 void reverseString_Iterative(string& s){
     
     int left = 0;
     size_t right = s.length() - 1;
     
     cout << "String is: " << s << endl;
     
     while (left < right) {
         
         char temp = s[left];
         s[left] = s[right];
         s[right] = temp;
         
         left++;
         right--;
     }
     cout << "Reversed String is: " <<  s << endl;
     //string s = "yek";
        // reverseString_Iterative(s);
        
 }
 // O(1) space complexity
 void reverseString_Swap(vector<char> &v){
     
     for (int i = 0; i < v.size() / 2 ; i++) {
         swap(v[i], v[v.size() - i - 1]);
     }
 }


 // O(n) space comlexity.
 void reverseString_Recursive(const string &str){
     
     size_t size = str.size();
     if (size == 1) {
         cout << str << endl;
     }else{
         cout << str[size - 1];
         reverseString_Recursive(str.substr(0, size - 1));
     }
 }

 */

#endif /* _44_Reverse_String_h */
