//
//  136_Single_Number.h
//  TheInterview
//
//  Created by Mr Kes on 12/28/20.
//

// MARK: - #136 - Single Number

#ifndef _36_Single_Number_h
#define _36_Single_Number_h
using namespace std;

class Solution_136 {
    
public:
    
    /*
     
        Brute-Force -> Sort it and compare it. O(nlogn) complexity.
     
    **/
    
    /*
     
        Better Approach -> Using hash table(map). Go through each element in the array and count how many times it occurs, then display the element which occurs once.
        The time complexity is O(n) since the entire array is iterated over and space complexity is O(n) since we keep the values and its occurences in a hash table.
     
    **/

    int singleNumber_HashTable(vector<int>& nums) {
        unordered_map<int, int> map; // O(1)
        
        for (int i = 0; i < nums.size(); i++) { // O(n)
            map[nums[i]]++;
        }
        
        unordered_map<int, int>::iterator itr;
        
        for (itr = map.begin(); itr != map.end(); itr++) {  // O(n)
            if (itr->second == 1) {
                return itr->first;
            }
        }
        return -1;
    }
    
    // Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

    /*
     
        Better Approach with Space comlexity O(1) -> Using XOR. (Tricky point is "a XOR b XOR a => b" , and useful XOR equations: a XOR 0 = a, a XOR a = 0)
        Time complexity is O(n) but since we don't use extra space, Space Compexity is O(1) which is better than O(n).
    **/
    
    int singleNumber_XOR(vector<int>& nums){
        int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            x ^= nums[i];
        }
        return  x;
    }
    
    
};


#endif /* _36_Single_Number_h */
