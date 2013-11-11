/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Unique-Paths.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 03:47:05 PM
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
      * 下面的代码使用了排列的方法来解答：
      * 由排列的知识，显然可知，从起点map[1][1]到终点map[m][n]一共需向下走m-1次，向右走n-1次
      * 只需要计算出这m-1+n-1次的全排列次数即可。
      * 由于m-1次下有重复，n-1次右也有重复，因此全排列次数为：P(m-1+n-1)/(P(m-1)*P(n-1))
      * */
     int uniquePaths(int m, int n) {
         // IMPORTANT: Please reset any member data you declared, as
         // the same Solution instance will be reused for each test case.
         if(!m || !n) return 0;
         if(m == 1 || n==1)     return 1;
         long long ret = 1;
         int alignSteps = m -1;
         int verticalSteps = n -1;
         if(alignSteps < verticalSteps)
         {
             int temp = alignSteps;
             alignSteps = verticalSteps;
             verticalSteps = temp;
         }
        for(int i = alignSteps+1; i <=verticalSteps+alignSteps; i++)
            ret *= i;
        for(int i = 1; i <= verticalSteps; i++)
            ret /= i;
        return ret;
     }
};
#endif  // _UNIQUE_PATHS_H_
