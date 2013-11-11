/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Minimum-Path-Sum.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/12/2013 01:08:18 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _MINIMUM_PATH_SUM_H_
#define _MINIMUM_PATH_SUM_H_
class Solution {
public:
    /* 
     * 典型DP问题，自左至右，自底向上按部就班即可
     *
     * */
    int minPathSum(vector<vector<int> > &grid) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(grid.size() == 0)	return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        vector<int> tempRow(cols, 0);
        vector<vector<int> > tables(rows, tempRow);
        tables[0][0] = grid[0][0];
        for(int i = 1; i < rows; i++)
        	tables[i][0] = grid[i][0] + tables[i-1][0];
       	for(int i = 1; i < cols; i++)
       		tables[0][i] = grid[0][i] + tables[0][i-1];
       	for(int i = 1; i < rows; i++)
       	{
       		for(int j = 1; j < cols; j++)
       		{
       			tables[i][j] = grid[i][j] + std::min(tables[i-1][j], tables[i][j-1]);
       		}
       	} 
       	return tables[rows-1][cols-1];
    }
};
#endif  // _MINIMUM_PATH_SUM_H_
