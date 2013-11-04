/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/04/2013 07:35:38 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Remove-Duplicates-from-Sorted-Array.h"
using namespace std;
int main()
{
    Solution s;
    int A[] = {1, 1, 2};
    int num = s.removeDuplicates(A, 3);
    cout<<num<<endl;
    return 0;
}
