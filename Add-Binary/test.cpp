/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/13/2013 07:26:26 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Add-Binary.h"
using namespace std;
int main()
{
	Solution s;
	string s1("11");
	string s2("1");
	cout<<s.addBinary(s1, s2)<<endl;
	return 0;
}
