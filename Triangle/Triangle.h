/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Triangle.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 02:40:44 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        /* 
         * 典型的DP问题
         * 可以看到每个数字triangle[i][j]在下一行都有两个相邻数字triangle[i+1][j]和triangle[i+1][j+1]
         * 借助于修改输入的triangle作为存储容器，自底向上，更新所有位置的minimumTotal
         * 每个位置的minimumTotal应该是原来元素triangle[i][j]的值加上min(triangle[i+1][j],triangle[i+1][j+1])
         * 新的triangle[0][0]就是要求的结果
         * */
        int minimumTotal(vector<vector<int> > &triangle) {
            // IMPORTANT: Please reset any member data you declared, as
            // the same Solution instance will be reused for each test case.
            if(triangle.size() == 0)    return 0;
            for(int row = triangle.size() - 2; row >=0; row--)
            {
                for(int col = 0; col < triangle[row].size(); col++)
                {
                    //更新minimum值
                    triangle[row][col] += std::min(triangle[row+1][col], triangle[row+1][col+1]); 
                }
            }
            return triangle[0][0];
        }
};
#endif  // _TRIANGLE_H_
