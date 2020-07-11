
// Reverse Integer

// Given a 32-bit signed integer, reverse digits of an integer.

// Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

/**
 * Definiton for singly-linked list
 * class ListNode {
 *    int data;
 *    ListNode *next;
 *    ListNode(int x) {
        data = x;
        next = NULL;
 *    }
 * }
 */

class Solution {
public:
    int reverse(int x) {
       
        int MIN_LIMIT = pow(-2, 31);
        int MAX_LIMIT = pow(2, 31) - 1;
    
        long long int answer = 0;
        while (x) {
        
            int remainder = x % 10;
            x /= 10;
            answer = answer*10 + remainder;
        }
        
        if (x < 0) {
            answer = answer*(-1);
        }
        
        if (answer < MIN_LIMIT || answer > MAX_LIMIT) {
            return 0;
        }
        
        return answer;
        
    }
};

// Time Complexity: O(log10(n)) ??

