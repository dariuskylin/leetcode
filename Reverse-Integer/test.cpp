/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/07/2013 08:36:11 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Reverse-Integer.h"
using namespace std;
int main()
{
    int x1 = 123, x2 = -123;
    Solution s;
    cout<<"123-reverse:"<<s.reverse(x1)<<endl;
    cout<<"-123-reverse:"<<s.reverse(x2)<<endl;
    return 0;
}

