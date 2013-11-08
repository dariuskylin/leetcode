/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Valid-Parentheses.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/08/2013 04:20:25 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _VALID_PARENTHESES_H_
#define _VALID_PARENTHESES_H_
#include <string>
#include <stack>
#include <map>
using namespace std;
class Solution {
public:
    /* 
     * 借助于栈来解决：
     * 1、遍历字符串所有元素
     * 2、遇到左括号就压栈
     * 3、遇到右括号，则判断栈顶左括号是否与右括号匹配（栈为空要考虑）
     * 4、如果不匹配，则直接return不匹配；反之，出栈左括号
     * 5、直到字符串所有元素处理完
     * 6、查看栈是否为空，如果为空，说明没有剩余左括号，那么return匹配；反之不匹配
     * */
    bool isValid(string s) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(s.size() == 0)		return true;
        if(s.size() == 1)		return false;
        stack<char> cstack;
        map<char, char> ctable;
        ctable['['] = ']';
        ctable['('] = ')';
        ctable['{'] = '}';
        for(int pos = 0; pos < s.length(); pos++)
        {
        	// 如果遇到左括号，直接压栈
        	if(isLeftHalf(s[pos]))
        		cstack.push(s[pos]);
        	// 遇到右括号，则看下栈是否为空、和栈顶括号是否配对
        	else
        	{
        		// 注意判断栈是否为空应该在前面，因为如果栈空，就没有栈顶元素
        		if(cstack.empty())
        			return false;
        		if(ctable[cstack.top()] == s[pos])
        			cstack.pop();
        	}
        }
        // 栈内是否还有左括号
        if(cstack.empty())
        	return true;
        return false;
    }
private:
	bool isLeftHalf(char c)
	{
		if(c == '{' || c == '(' || c == '[')
			return true;
		return false;
	}
};
#endif  // _VALID_PARENTHESES_H_
