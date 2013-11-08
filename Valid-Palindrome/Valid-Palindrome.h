/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Valid-Palindrome.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/08/2013 03:04:45 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _VALID_PALINDROME_H_
#define _VALID_PALINDROME_H_
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    /* 
     * 这道题判断是否是回文串，有两个步骤：
     * 1、对字符串的预处理，题目要求只考虑字符串中的数字和字母，而且字母忽略大小写。
     *    为了方便，我们可以新建一个临时vector将非数字和字母的字符过滤掉，同时将
     *    大写转换成小写，统一处理字符。
     * 2、从字符串起始位置到中间位置，逐次判断它的对称位置的字符是否一致，否那么
     *    不是回文；反之如果都一致，那么就是回文。
     *
     * */
    bool isPalindrome(string s) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(s.size() < 2)
        	return true;
        vector<char> middlestring;
        for(int pos = 0; pos < s.size(); pos++)
        {
        	if( (s[pos] >= '0'&&s[pos] <= '9')||(s[pos] >= 'a'&&s[pos] <= 'z'))
        		middlestring.push_back(s[pos]);
        	// 将大写转换为小写
        	else if((s[pos] >= 'A'&&s[pos] <= 'Z') )
        		middlestring.push_back(static_cast<char>(s[pos] + 'a' - 'A'));
        }
        bool ok = true;
        for(int pos = 0; pos < middlestring.size()/2; pos++)
        {
        	// 判断对称位置的字符是否相等
        	if(middlestring[pos] != middlestring[middlestring.size()-1-pos])
        	{
        		ok = false;
        		break;
        	}
        }
        return ok;
    }
};
#endif  // _VALID_PALINDROME_H_
