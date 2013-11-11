/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 02:49:42 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include "Triangle.h"
using namespace std;
int main()
{
    vector<vector<int> > triangle;
    int a0[] = {2};
    int a1[] = {3, 4};
    int a2[] = {6, 5, 7};
    int a3[] = {4, 1, 8, 3};
    vector<int> row0(a0, a0+1);
    vector<int> row1(a1, a1+2);
    vector<int> row2(a2, a2+3);
    vector<int> row3(a3, a3+4);
    triangle.push_back(row0);
    triangle.push_back(row1);
    triangle.push_back(row2);
    triangle.push_back(row3);
    Solution s;
    cout<<s.minimumTotal(triangle)<<endl;
    return 0;
}
