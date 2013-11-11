/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 05:55:07 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include "Unique-Paths-II.h"
using namespace std;
int main()
{
    vector<vector<int> > obstacleGrid;
    int a0[] = {0, 0, 0};
    int a1[] = {0, 1, 0};
    int a2[] = {0, 0, 0};
    vector<int> row0(a0, a0+3);
    vector<int> row1(a1, a1+3);
    vector<int> row2(a2, a2+3);
    obstacleGrid.push_back(row0);
    obstacleGrid.push_back(row1);
    obstacleGrid.push_back(row2);
    Solution s;
    cout<<s.uniquePathsWithObstacles(obstacleGrid)<<endl;
}
