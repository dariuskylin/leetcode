/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Remove-Duplicates-from-Sorted-Array.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/04/2013 06:58:20 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
#define _REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
class Solution {
public:
    /* 
     * 设置两个指针，一个指针负责遍历输入数组所有pos，一个指针负责指向去重后的数组pos
     *
     * */
    int removeDuplicates(int A[], int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if( !A || n <= 0)
            return 0;
        int ret = 1;
        int i = 0; 
        int j = i + 1; 
        while( j < n )
        {
        	if( A[i] == A[j])
        		j++;
        	else
        	{
        		ret++;
        		// 给去重后的数组元素赋值
        		A[i + 1] = A[j];
        		i++, j++;
        	}

        }
        return ret;
    }
};
#endif  // _REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
