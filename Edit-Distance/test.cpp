/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/08/2013 05:37:47 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include "Edit-Distance.h"
using namespace std;
int main()
{
    string s1("abcd");
    string s2("acce");
    Solution s;
    cout<<s.minDistance(s1, s2)<<endl;
    return 0;
}
