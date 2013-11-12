/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Pascal-Triangle.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/12/2013 12:11:36 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _PASCAL_TRIANGLE_H_
#define _PASCAL_TRIANGLE_H_
#include <vector>
using std::vector;
class Solution {
public:
    /* 
     * 一道简单的模拟生成题，单纯的程序设计，没有什么算法牵扯。
     * 需要注意的是，当输入为0， 1， 2，的时候。
     *
     * */
    vector<vector<int> > generate(int numRows) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        vector<vector<int> > retRows;
        if(!numRows) 	return retRows;
        vector<int> row1(1, 1);
        retRows.push_back(row1);
        if(numRows == 1) 	return retRows;
        vector<int> row2(2, 1);
        retRows.push_back(row2);
        if(numRows == 2) 	return retRows;
        //从3开始，生成开始有规律
        for(int rowSeq = 3; rowSeq <= numRows; rowSeq++)
        {
        	vector<int> tempRow(rowSeq, 1);
        	for(int i = 1; i < rowSeq-1; i++)
        		tempRow[i] = retRows[rowSeq-2][i-1] + retRows[rowSeq-2][i];
        	retRows.push_back(tempRow);
        }
        return retRows;
    }
};
#endif  // _PASCAL_TRIANGLE_H_
