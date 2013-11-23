/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/22/2013 12:34:19 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Search-In-Rotated-Sorted-Array.h"
using namespace std;
int main()
{
    Solution s;
    int A[] = {5, 1, 3};
    cout<<"5, 1, 3"<<endl;
    cout<<"2:"<<s.search(A, 3, 2)<<endl;
    return 0;
}
