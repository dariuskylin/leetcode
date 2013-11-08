/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/08/2013 03:27:06 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Valid-Palindrome.h"
#include <string>
using namespace std;
int main()
{
    string s1("A man, a plan, a canal: Panama");
    string s2("race a car");
    Solution s;
    bool ret1 = s.isPalindrome(s1);
    bool ret2 = s.isPalindrome(s2);
    if(ret1)
        cout<<"is palindrome."<<endl;
    else
        cout<<"Not palindrome."<<endl;
    if(ret2)
        cout<<"is palindrome."<<endl;
    else
        cout<<"Not palindrome."<<endl;
    return 0;
}
