//
//  705_Design_HashSet.h
//  InterviewQuestionTester
//
//  Created by Mr Kes on 9/4/20.
//  Copyright © 2020 CemilKes. All rights reserved.
//
// MARK: - #705: Design HashSet
/* https://leetcode.com/problems/design-hashset/
 Design a HashSet without using any built-in hash table libraries.

 To be specific, your design should include these functions:

     add(value): Insert a value into the HashSet.
     contains(value) : Return whether the value exists in the HashSet or not.
     remove(value): Remove a value in the HashSet. If the value does not exist in the HashSet, do nothing.


 Example:

 MyHashSet hashSet = new MyHashSet();
 hashSet.add(1);
 hashSet.add(2);
 hashSet.contains(1);    // returns true
 hashSet.contains(3);    // returns false (not found)
 hashSet.add(2);
 hashSet.contains(2);    // returns true
 hashSet.remove(2);
 hashSet.contains(2);    // returns false (already removed)


 Note:

     All values will be in the range of [0, 1000000].
     The number of operations will be in the range of [1, 10000].
     Please do not use the built-in HashSet library.


 
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

//  MARK: - Edge Cases / Weird Test Cases
/*
 *
 *
 **/

//  MARK: - Main Function
 /*
  *
  *
  **/

// Watching Link:

#ifndef _05_Design_HashSet_h
#define _05_Design_HashSet_h

struct HashNode {
    int data;
    HashNode* next;
};

class HashSet {

private:
    
    HashNode** elements;
    int mysize;
    int capacity;
    int hashCode(int value) const;
    
    
public:
    
    HashSet();
    ~HashSet();
    
    void add(int value);
    void clear();
    bool isEmpty() const;
    bool contains(int value) const;
    void remove(int value);
    int size() const;

};

HashSet::HashSet(){
    
    capacity = 10;
    mysize   = 0;
    elements = new HashNode*[capacity](); // all are null
}

void HashSet::add(int value){
    
    if (!contains(value)) {
         int bucket = hashCode(value);
        //elements[bucket] = new HashNode(value,elements[bucket]);
        HashNode* newNode = new HashNode();
        newNode -> data = value;
        newNode->next = elements[bucket];
        elements[bucket] = newNode;
        mysize++;
    }
}

bool HashSet::contains(int value) const{
    
    int bucket = hashCode(value);
    HashNode* temp = elements[bucket];
    while (temp != NULL) {
        if (temp->data == value) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void HashSet::remove(int value){
    
    int bucket = hashCode(value);
    
    if (elements[bucket] != NULL) {
        //Remove from the front
        
        if (elements[bucket]->data == value) {
            HashNode* trashNode = elements[bucket];
            elements[bucket] = elements[bucket]->next;
            mysize--;
            delete trashNode;
        }else{
            
            HashNode* curr = elements[bucket];
            while (curr->next != NULL) {
                if (curr->next->data == value) {
                    HashNode* trash = curr->next;
                    curr->next = curr->next->next;
                    mysize--;
                    delete trash;
                    break;
                }
                curr = curr->next;
            }
        }
    }
}

int HashSet::hashCode(int value) const{

    return abs(value) % capacity;
}

#endif /* _05_Design_HashSet_h */
