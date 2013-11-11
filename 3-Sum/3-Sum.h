/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  3-Sum.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/10/2013 10:50:12 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _3_SUM_H_
#define _3_SUM_H_
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        vector<int> triple;
        vector<vector<int> > triples;
        if(num.size() < 3) 		return triples;
        
        std::sort(num.begin(), num.end());

        //枚举所有排序后的最小值
        for(int i = 0; i <num.size()-2; i++)
        {
        	
        }
    }
};
#endif  // _3_SUM_H_
