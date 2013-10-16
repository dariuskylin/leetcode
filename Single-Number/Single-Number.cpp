/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Single-Number.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  10/14/2013 12:25:11 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Single-Number.h"
using namespace std;
int main()
 {
 	int a[] = { 3, 5, 7, 19, 3, 5, 7};
 	Solution s;
 	cout<<s.singleNumber(a, sizeof(a)/sizeof(int))<<endl;
 	return 0;
 }
