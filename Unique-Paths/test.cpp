/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 03:55:13 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Unique-Paths_Permutations_ACCEPT.h"
using namespace std;
int main()
{
    Solution s;
    cout<<"(2, 2):"<<s.uniquePaths(2, 2)<<endl;
    cout<<"(3, 2):"<<s.uniquePaths(3, 2)<<endl;
    cout<<"(3, 3):"<<s.uniquePaths(3, 3)<<endl;
    cout<<"(100, 100)"<<s.uniquePaths(100,100)<<endl;
    return 0;
}
