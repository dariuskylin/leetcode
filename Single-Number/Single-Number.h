/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Single-Number.h
 *    Description:  
 *        Version:  1.0
 *        Created:  10/16/2013 08:52:17 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _SINGLE_NUMBER_H_
#define _SINGLE_NUMBER_H_
class Solution {
public:
    int singleNumber(int A[], int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int ret = 0;
        for(int i = 0; i < n; i++)
        {
        	ret ^= A[i];
        }
        return ret;
    }
};
#endif  // _SINGLE_NUMBER_H_
