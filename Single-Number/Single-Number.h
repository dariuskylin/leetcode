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
	/*
	 * 题意是：给定一个数组，每个数字都出现了2次，只有一个数字出现1次，找出这个数字。
	 * 很显然这个题目可以使用异或求解，因为任何一个数字异或它本身都是0，即A^A=0;
	 * 而0和任何数字A异或都是A，0^A=A.
	 */
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
