/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/20/2013 07:33:22 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Remove-Duplicates-from-Sorted-Array-II.h"
using namespace std;
int main()
{
    int A[] = {1, 1, 1, 2, 2, 3};
    Solution s;
    cout<<s.removeDuplicates(A, 6)<<endl;
    return 0;
}
