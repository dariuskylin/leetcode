/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Remove-Duplicates-from-Sorted-Array-II.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/20/2013 01:48:12 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H_
#define _REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H_
#include <iostream>
using namespace std;
class Solution {
public:
    /* 
     *  设置一个计数器统计重复元素出现的次数，超过2则去除
     *
     * */
    int removeDuplicates(int A[], int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if( n == 0)		return 0;
        int MostAllowedNum = 1;
        int N = 2;

        int start = 1;
        for(int i = 1; i < n; i++)
        {
        	if(A[i] == A[i-1])
        	{	
        		MostAllowedNum++;
        		if(MostAllowedNum > N)
        			continue;
        		else
        			A[start++] = A[i];
        	}
        	else
        	{
        		A[start++] = A[i];
        		MostAllowedNum = 1;
        	}
        }
        //for(int i = 0; i <start; i++)
        //	cout<<A[i]<<"  ";
        //cout<<endl;
        return start;

    }
};
#endif // _REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H_
