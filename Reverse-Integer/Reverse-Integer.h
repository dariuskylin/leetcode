/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Reverse-Integer.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 02:13:18 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _REVERSE_INTEGER_H_
#define _REVERSE_INTEGER_H_
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Solution {
public:
    /* 
     * 虽然题目note里面说了要注意整形溢出，但是给出的函数类型返回值是int，code就不用考虑溢出了~
     * 输入整形的正负号，我们用一个变量@neg来标记。
     * 在字符串和整形之间的转化中，我们统一都将输入整数当作正数来看待（负的取绝对值）
     * 借助于stringstream，我们将int转为string，再把string逆序，最后再借助于stringstream，
     * 将string转为int（不必自己去手动忽略string的低位0）。
     * */
    int reverse(int x) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int neg = 1;
        if(x < 0)
        	neg = -1, x = -x;
        stringstream ss;
        string s;
        char temp;
        int integer;
        ss<<x;
        ss>>s;
        for(int pos = 0; pos < s.size()/2; pos++)
        {
        	temp = s[pos];
        	s[pos] = s[s.size() - 1 -pos];
        	s[s.size() - 1 -pos] = temp;
        }
        // 再次使用stringstream，要先clear
        ss.clear();
        ss<<s;
        ss>>integer;
        return neg*integer;
    }
};
#endif  // _REVERSE_INTEGER_H_
