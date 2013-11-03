/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Container-With-Most-Water.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013年11月03日 23时30分01秒
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
     * 因为水的特性，在容器里总是以矩形存在的，所以最小的height才是高
     * 最简单的方法是设置两层for循环，枚举所有的左边height和右边height，求出所有面积，得出最大面积。
     * 这个算法复杂度O(N^2)，leetcode平台判断为Time Limit Exceeded超时。
     * */
    int maxArea(vector<int> &height) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(height.size() < 2)
        	return 0;
        int maxArea = 0;
        int tempArea = 0;
        for(int left = 0; left < height.size() - 1; left++)
        {
        	for(int right = left + 1; right < height.size(); right++)
        	{
        		tempArea =std::min(height[left], height[right]) * (right - left);
        		if(tempArea > maxArea)
        			maxArea = tempArea;
        	}
        }
        return maxArea;
    }
};
#endif  // _CONTAINER_WITH_MOST_WATER_H_
