/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Container-With-Most-Water.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013年11月03日 23时49分52秒
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _CONTAINER_WITH_MOST_WATER_H_
#define _CONTAINER_WITH_MOST_WATER_H_
#include <vector>
#include <iostream>
using std::vector;
class Solution {
public:
    /* 
     * 这是一道双指针/滑动窗口的题型，即利用两个指针对一个数组或链表进行扫描。
     * 扫描方式有以不同速度从头向尾扫描，或者分别从头和尾向中间扫描。
     * 这道题最简单的做法是用第一种扫描方式，两层for循环，复杂度O(N^2),但是leetcode判断超时；
     * 下面的解法使用了分别从头和尾向中间扫描的方式，复杂度为O(N),需要注意的是判断终止条件。
     *
     * */
    int maxArea(vector<int> &height) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
    	if(height.size() < 2)
    		return 0;
    	int maxArea = 0; 
    	int tempArea = 0;
    	int left = 0, right = height.size() - 1;
    	while( left < right)
    	{
            //水的特点是总是保持一个矩形，以最小的height那条边作为矩形的高
    		tempArea = (right - left)*std::min(height[left], height[right]);
    		maxArea = std::max(tempArea, maxArea);

            //这是整段代码的关键点，指针的移动条件
    		if(height[left] <= height[right])
    			left++;
    		else
    			right--;
    	}
    	return maxArea;
    }
};
#endif  // _CONTAINER_WITH_MOST_WATER_H_
