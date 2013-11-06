/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Search-Insert-Position.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 01:12:03 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _SEARCH_INSERT_POSITION_H_
#define _SEARCH_INSERT_POSITION_H_
class Solution {
public:
    /* 
     * 既然题目说了是排序的数组，很显然要用二分查找
     * 二分查找有两点需要注意：死循环和漏元素
     * 还要注意当所有数组元素都小于@target的特殊情况
     * */
    int searchInsert(int A[], int n, int target) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        int left = 0, right = n-1, middle = 0;
        if( !A || n < 1)
        	return 0;
        while( left < right )
        {
        	middle = left + ((right - left) >> 1);
        	if(A[middle] == target)
        		return middle;
        	else if( A[middle] < target )
        	{
        		left = middle + 1;
        	}
        	else
        		//这里不能用right = middle+1
        		right = middle; 
        }
        // 当@target大于所有数组元素
        if(A[right] < target)
        	return right + 1;
        // 当插入位置是第一个大于@target的位置
        if(left == right)
        	return left;
    }
};
#endif  // _SEARCH_INSERT_POSITION_H_
