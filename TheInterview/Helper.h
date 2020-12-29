//
//  Helper.h
//  TheInterview
//
//  Created by Mr Kes on 12/28/20.
//

#ifndef Helper_h
#define Helper_h
using namespace std;

    void print_Unordered_Map(unordered_map< int , int > &map){
        unordered_map<int, int>::iterator itr;
        
        for (itr = map.begin(); itr != map.end(); itr++) {
            cout << itr->first << " " << itr->second << endl;
        }
    }
    
    void print_Unordered_Map_2(unordered_map<int, int> &map){
        for (auto itr : map) {
            cout << itr.first << " " << itr.second << " " << endl;
        }
    }
    
    void print_Vector(vector<int> &vec){
        for (int i = 0; i< vec.size(); i++) {
            cout << vec[i] << " " << endl;
        }
    }
    
//    vector<int> vec;
//    vector<int> vec1 = {1,2,3,4,5};

#endif /* Helper_h */
