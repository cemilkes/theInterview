//
//  706_Design_HashMap.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 9/11/20.
//  Copyright © 2020 CemilKes. All rights reserved.

// MARK: - #706: Design HashMap
/*
 Design a HashMap without using any built-in hash table libraries.

 To be specific, your design should include these functions:

     put(key, value) : Insert a (key, value) pair into the HashMap. If the value already exists in the HashMap, update the value.
     get(key): Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
     remove(key) : Remove the mapping for the value key if this map contains the mapping for the key.


 Example:

 MyHashMap hashMap = new MyHashMap();
 hashMap.put(1, 1);
 hashMap.put(2, 2);
 hashMap.get(1);            // returns 1
 hashMap.get(3);            // returns -1 (not found)
 hashMap.put(2, 1);          // update the existing value
 hashMap.get(2);            // returns 1
 hashMap.remove(2);          // remove the mapping for 2
 hashMap.get(2);            // returns -1 (not found)


 Note:

     All keys and values will be in the range of [0, 1000000].
     The number of operations will be in the range of [1, 10000].
     Please do not use the built-in HashMap library.
 
*/

//  MARK: - Algorithm/Path || Explanation
/*
 *
 *
 *
 *
 *
 **/

//  MARK: - Time and Space Complexity
/*  Time Complexity is
 *  Space Complexity is
 *
 **/

//  MARK: - Edge Cases / Test Cases
/*
 *
 *
 **/

//  MARK: - Main Function
 /*
  *
  *
  **/

// Watch Link:

#ifndef _06_Design_HashMap_h
#define _06_Design_HashMap_h
#define MAX_LEN 100000 // The amount of buckets


class MyHashMap {

private:
    
    vector<pair<int, int>> hashmap[MAX_LEN]; // hashmap implemented by array
    
    int getIndex(int key){
        return abs(key) % MAX_LEN;
    }
    
    int getPosition(int key, int index){
        // Each bucket contains a vector. Iterate all the elements in the bucket to find the target key.
        for (int i = 0; i < hashmap[index].size(); i++) {
            if (hashmap[index][i].first == key) {
                return i;
            }
        }
        return -1;
    }
    
public:
    /** Initialize your data structure here. */
    
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        
        int index = getIndex(key);
        int position = getPosition(key, index);
        
        if (position < 0) {
            hashmap[index].push_back(make_pair(key, value));
        }else{
            hashmap[index][position].second = value;
        }
  
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
      
        int index = getIndex(key);
        int position = getPosition(key, index);
        
        if (position >= 0) {
            return hashmap[index][position].second;
        }else{
            return -1;
        }

    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int index = getIndex(key);
        int position = getPosition(key, index);
        if (position >= 0) {
            hashmap[index].erase(hashmap[index].begin() + position);
        }
    }
};

#endif /* _06_Design_HashMap_h */
