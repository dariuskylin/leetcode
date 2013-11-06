/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/06/2013 11:56:26 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include "Two-Sum.h"
using namespace std;
int main()
{
    int a[] = {2, 7, 11, 15};
    vector<int> numbers(a, a + sizeof(a)/sizeof(int));
    Solution s;
    vector<int> indexs = s.twoSum(numbers, 9);
    if( indexs.size() )
        cout<<indexs[0]<<"   "<<indexs[1]<<endl;
    return 0;
}
