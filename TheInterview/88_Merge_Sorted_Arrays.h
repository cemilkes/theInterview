//
//  88_Merge_Sorted_Arrays.h
//  TheInterview
//
//  Created by Mr Kes on 12/29/20.
//

#ifndef _8_Merge_Sorted_Arrays_h
#define _8_Merge_Sorted_Arrays_h
class Solution_88 {
    
    /*
     
        Brute-Force -> Add first array and second array to a third array and use merge-sort algorithm.
                    Adding the elements to the third array is order of O(n + m) and merge sort algorithm runs a total time of log(n + m)
                    Thus the algorithm runs O((n + m)log(n + m))
     
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
             
            for (int value : nums2) {
                 nums1[m++] = value;
             }
             std::sort(nums1.begin(), nums1.end());
     
            Another two lines solution
            //copy(nums2.begin(), nums2.begin() + n, nums1.begin() + m);
            //sort(nums1.begin(), nums1.end());
     
         }
     
     **/
    
    
    /*
     
        Better Approach w/ O(n+m) Space Comlexity -> Using two pointers for nums1 and nums2. Compare each element in the both array and put lesser one to third array. And increment the pointers by 1 from the array which pushed its element and from the third array.
     
     **/
    
    /*
     
        Better Approach w/ O(1) Space Complexity -> Using three pointers and go backwards in the arrays.
     
     */

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
                
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        
        while (i >= 0 && j >= 0 && k >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else if (nums1[i] < nums2[j]) {
                nums1[k] = nums2[j];
                j--;
            } else {
                nums1[k] = nums1[i];
                k--;
                if (k > 0)
                    nums1[k] = nums2[j];
                i--;
                j--;
            }
            k--;
        }
        
        while (j >= 0) {
            nums1[j] = nums2[j];
            j--;
        }
        
        
    }
    
};

#endif /* _8_Merge_Sorted_Arrays_h */
