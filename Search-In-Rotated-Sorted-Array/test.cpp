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
    int A[] = {4, 5, 6, 7, 0, 1, 2};
    cout<<"4, 5, 6, 7, 0, 1, 2"<<endl;
    cout<<"4:"<<s.search(A, 7, 4)<<endl;
    cout<<"5:"<<s.search(A, 7, 5)<<endl;
    cout<<"6:"<<s.search(A, 7, 6)<<endl;
    cout<<"7:"<<s.search(A, 7, 7)<<endl;
    cout<<"0:"<<s.search(A, 7, 0)<<endl;
    cout<<"1:"<<s.search(A, 7, 1)<<endl;
    cout<<"2:"<<s.search(A, 7, 2)<<endl;
    return 0;
}
