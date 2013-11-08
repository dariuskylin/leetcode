/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/08/2013 04:35:00 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include "Valid-Parentheses.h"
using namespace std;
int main()
{
	string s1("()[]{}");
	string s2("([)]");
	string s3("[])");
	Solution s;
	cout<<"()[]{}:	";
	if(s.isValid(s1))
		cout<<"valid"<<endl;
	else
		cout<<"invalid"<<endl;
	cout<<"([)]:	";
		if(s.isValid(s2))
		cout<<"valid"<<endl;
	else
		cout<<"invalid"<<endl;
	cout<<"[]):	";
	if(s.isValid(s3))
		cout<<"valid"<<endl;
	else
		cout<<"invalid"<<endl;
    return 0;
}
