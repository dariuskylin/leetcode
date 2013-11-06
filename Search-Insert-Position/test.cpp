/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 01:26:25 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Search-Insert-Position.h"
using namespace std;
int main()
{
    int a1[] = {1, 3, 5, 6};
    Solution s;
    cout<<"5->2:"<<s.searchInsert(a1, 4, 5)<<endl;
    cout<<"2->1:"<<s.searchInsert(a1, 4, 2)<<endl;
    cout<<"7->4:"<<s.searchInsert(a1, 4, 7)<<endl;
    cout<<"0->0:"<<s.searchInsert(a1, 4, 0)<<endl;
    return 0;
}
