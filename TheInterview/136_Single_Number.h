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
     
        Brute-Force -> Sort it and compare it. O(nlogn) complexity
     
    **/
    
    /*
     
        Better Approach -> Go through each element in the array and count how many times it occurs, then display the element which occurs once. This solution use hash table.
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
    
    /*
     
     Much Better Approach ->
     
     */
    
    int singlueNumber_XOR(vector<int>& nums){
        
        return -1;
    }
    
    
};


#endif /* _36_Single_Number_h */
