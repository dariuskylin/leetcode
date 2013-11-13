/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Add-Binary.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/13/2013 07:23:10 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _ADD_BINARY_H_
#define _ADD_BINARY_H_
#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
class Solution {
public:
    /* 
     * 简单的程序设计题目
     *
     * */
    string addBinary(string a, string b) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        int len_a = a.size();
        int len_b = b.size();
        if(!len_a)	return b;
        if(!len_b)	return a;
        //返回的和字符串长度应该不超过a和b最大长度+1
        int len_sumStr = std::max(len_a, len_b) + 1;
        string sumStr(len_sumStr, '0');
        int pSum = len_sumStr-1, pA = len_a -1, pB = len_b - 1;
        int carry = 0;
        int lhs, rhs, tempSum;
        while(len_a >= 0 || len_b >= 0)
        {
        	if(len_a >= 0)
        		lhs = a[len_a] - '0';
      		else
      			lhs = 0;
 			if(len_b >= 0)
 				rhs = b[len_b] - '0';
			else
				rhs = 0;
			tempSum = lhs + rhs + carry;
			if(tempSum > 1)
				carry = 1, tempSum -= 2;
			else
				carry = 0;
			sumStr[len_sumStr] = tempSum + '0';
			len_a--, len_b--, len_sumStr--;			
        }
        if(carry)
        {
			sumStr[0] = '1';
       	    return sumStr;
   		} 
   		//如果首位为0，需要去掉第一位，以非0开头
   		else
		   return sumStr.substr(1, len_sumStr-1); 
    }
};
#endif  // _ADD_BINARY_H_
