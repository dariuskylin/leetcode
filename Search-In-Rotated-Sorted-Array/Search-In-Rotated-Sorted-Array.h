/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Search-In-Rotated-Sorted-Array.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/21/2013 05:23:31 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _SEARCH_IN_ROTATED_SORTED_ARRAY_H_
#define _SEARCH_IN_ROTATED_SORTED_ARRAY_H_
class Solution {
    public:
        /* 
         * 使用二分查找，但是需要确定好左右边界left，right。
         * */
        int search(int A[], int n, int target) {
            // IMPORTANT: Please reset any member data you declared, as
            // the same Solution instance will be reused for each test case.
            if(!n)  return -1;
            if(n==1) 
            {
                if(A[0] == target) return 0;
                return -1;
            }
            int left=0, right=n-1;
            int middle;
            while(left < right)
            {
                middle = left + ((right-left)>>1);
                if(A[middle] == target)
                    return middle;
                if(A[middle] > A[left])
                {
                    if( A[left] == target)
                        return left;
                    if(A[left] < target && A[middle] > target)
                        right = middle - 1;
                    else
                        left = middle + 1;
                }
                else
                {
                    if(A[right] == target)
                        return right;
                    if(A[middle] < target && target < A[right])
                        left = middle + 1;
                    else
                        right = middle - 1;
                }
            }
            if(left == right && A[left] == target)
                return left;
            return -1;
        }
};
#endif  // _SEARCH_IN_ROTATED_SORTED_ARRAY_H_
