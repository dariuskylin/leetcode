/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Unique-Paths.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 04:06:18 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _UNIQUE_PATHS_H_
#define _UNIQUE_PATHS_H_
class Solution {
    public:
        /* 
         * 这道题目既可以用DP解答，也可以用排列解
         * 下面的代码使用DP的方法来解答：
         * 由题意值，走的方向只有两个，右和下。所以，任意位置map[i][j]的上一步可能是两个位置：
         * map[i-1][j]或者map[i][j-1]，所以可以列出描述式：
         * 1、map[i][j] = map[i-1][j] + map[i][j-1]   i,j >1
         * 2、map[i][j] = 1                           i=1或者j=1
         * 根据描述式，自底向上求出所有中间值，map[m][n]就是返回值。
         *
         * */
        int uniquePaths(int m, int n) {
            // IMPORTANT: Please reset any member data you declared, as
            // the same Solution instance will be reused for each test case.
            if(!m || !n)    return 0;
            if(m == 1 || n==1)      return 1;
            long long tables[101][101] = {0};
            tables[1][1] = 1;
            for(int row = 1; row <= m; row++)
                tables[row][1] = 1;
            for(int col = 1; col <= n; col++)
                tables[1][col] = 1;
            for(int row = 2; row <= m; row++)
                for(int col = 2; col <= n; col++)
                    tables[row][col] = tables[row-1][col] + tables[row][col-1];
            return tables[m][n];
        }
};
#endif  // _UNIQUE_PATHS_H_
