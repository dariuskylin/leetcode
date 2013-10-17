/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Climbing-Stairs.h
 *    Description:  
 *        Version:  1.0
 *        Created:  10/17/2013 11:12:57 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _CLIMBING_STAIR_H_
#define _CLIMBING_STAIR_H_
class Solution {
public:
	/*
	 * 这是个斐波那契数列问题。我们这样想，最后一步肯定是爬到台阶顶部的，
	 * 那么这最后一步可以是从n-1层台阶上来的，也可以是从n-2层台阶上来的，
	 * 因为一步可以迈1层或者2层。所以我们可以有递归公式
	 * f(n) = f(n-1) + f(n - 2)，初始条件是f(0) = f(1) = 1.
	 *
	 * 编程这个递归公式可以采用两种方法：递归式和非递归式。
	 * 递归式的解法，当n比较大时，会超时，这里在n=38时，
	 * leetcode就报超时错误了,所以不能使用。只能使用非递归的方法
	 */

	 /*
	 * 下面是递归式的解法，当n比较大时，会超时，这里在n=38时，leetcode就报超时错误了。
	 int climbStairs(int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if( n ==1 || n == 0)
            return 1;
        return climbStairs(n - 2) + climbStairs(n - 1);
    }*/
    /*
     * 下面是非递归的方法，Accepted
     */
    int climbStairs(int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if( n ==1 || n == 0)
            return 1;
        int lhs = 1, rhs = 1;
        int temp;
        for(int i = 1; i < n; i ++)
        {
            temp = lhs + rhs;
            lhs = rhs;
            rhs = temp;
        }
        return rhs;
    }

};
#endif  // _CLIMBING_STAIR_H_
