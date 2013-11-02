/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Plus-One.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/03/2013 03:55:16 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef PLUS_ONE_H_
#define PLUS_ONE_H_
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    /*
     * 题目的意思是，给定一个数组表示（每一个元素表示一位）的整数，计算用它加1的结果
     * eg， 1 2 3应该得出1 2 4 ，考虑到进位，3 4 9 就应该为3 5 0.
     * 最直观的做法是把已知数组转换为一个整数N，然后直接计算N+1，最后再把N+1转换为数组
     * 但是这种方法比较复杂，比较容易出错，而且或许会溢出整数边界，我们考虑另一种方法。
     * 另一种方法，就是直接将每一位相加，到10就进位。需要注意的就是：
     * 1、数组的低位表示的是数值的高位，数组的高位表示的是数值的地位
     * 2、利用栈结构存取中间结果
     * 3、由栈转为结果数组时，需要过滤高位0(这里不需要考虑结果就是0的情况，因为N+1 >= 1，不可能为0)
     */
    vector<int> plusOne(vector<int> &digits) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        //@carry用来表示进位信息
        int carry = 0, temp = 0;
        vector<int> ret;
        stack<int> stack;
        if(digits.size() == 0)
        	return ret;
        //N+1，可以将1放到进位中
        carry = 1;
        //倒序，数组高位表示整数的低位
        for(int i = digits.size() - 1; i >= 0; i--)
        {
        	temp = digits[i] + carry;
        	//满10要进位
        	if(temp == 10)
        	{
        		stack.push(0);
        		carry = 1;
        	}
        	else
        	{
        		stack.push(temp);
        		carry = 0;
        	}
        }
        //出现N是全9的情况，比如99+1 =100，需要多一位
        if(carry == 1)
        	stack.push(carry);
        //去掉高位0
        while(stack.top() == 0)
        {
        	stack.pop();
        }
        //从栈中移除结果数组
        while(!stack.empty())
        {
        	temp = stack.top();
        	stack.pop();
        	ret.push_back(temp);
        }
        return ret;
    }
};
#endif  // PLUS_ONE_H_
