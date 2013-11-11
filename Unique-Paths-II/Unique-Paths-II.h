/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Unique-Paths-II.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 05:41:57 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _UNIQUE_PATHS_II_H_
#define _UNIQUE_PATHS_II_H_
#include <vector>
using std::vector;
class Solution {
public:
    /* 
     * 障碍物若是只有几个，且个数是固定的，可以用排列来做。比如当只有1个障碍物时，将无障碍的路总数量-经过
     * 障碍点的路的数量；2个障碍物时，无障碍的路总数量-经过障碍1的路的数量-经过障碍2的路数量+同时经过2个障碍
     * 的路数量。由此可看，当障碍物一多，或者障碍物不确定时，用排列非常麻烦。
     * 下面用DP来解决这个问题
     * 由题意值，走的方向只有两个，右和下。所以，任意位置map[i][j]的上一步可能是两个位置：
     * map[i-1][j]或者map[i][j-1]，所以可以列出描述式：
     * 1、map[i][j]=0 						obstacle[i][j]为1
     * 2、map[i][j]=map[i-1][j] 			obstacle[i][j], obstacle[i-1][j]为0,obstacle[i][j-1]为1
     * 3、map[i][j]=map[i][j-1]   			obstacle[i][j],obstacle[i][j-1]为0,obstacle[i-1][j]为1
     * 4、map[i][j]=map[i-1][j]+map[i][j-1]   obstacle[i-1][j],obstacle[i][j-1],obstacle[i][j]为0
     * 可以进一步化简
     * 1、map[i][j]=0 							obstacle[i][j]为1
     * 2、map[i][j]=map[i-1][j]+map[i][j-1]   	obstacle[i][j]为0
     * */
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(obstacleGrid.size() == 0)
        	return 0;
        //如果起点有障碍
        if(obstacleGrid[0][0])	return 0;
        int rows = obstacleGrid.size();
        int cols = obstacleGrid[0].size();
        //存储中间经过的所有位置的路的条数
        int tables[101][101] = {0};
        //起点赋值（起点有障碍的情况已在函数开始处理了）
        tables[1][1] = 1;
        for(int i = 1; i <= rows; i++)
        {
        	for(int j = 1; j <= cols; j++)
        	{
        		if(i==1&&j==1)
        			continue;
        		//如果这个点有障碍,表示不能通过，赋值0
        		if(obstacleGrid[i-1][j-1])
        			tables[i][j] = 0;
        		//没有障碍物，可以通过
        		else
        			tables[i][j] = tables[i-1][j] + tables[i][j-1];
        	}
        }
        return tables[rows][cols];
    }
};
#endif  // _UNIQUE_PATHS_II_H_
