/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 11:06:14 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include "Decode-Ways.h"
using namespace std;
int main()
{
    string s1("12");
    string s2("1");
    string s3("230");
    string s4("00");
    string s5("01");
    Solution s;
    cout<<"12:"<<s.numDecodings(s1)<<endl;
    cout<<"1:"<<s.numDecodings(s2)<<endl;
    cout<<"230:"<<s.numDecodings(s3)<<endl;
    cout<<"00:"<<s.numDecodings(s4)<<endl;
    cout<<"01:"<<s.numDecodings(s5)<<endl;
    return 0;
}
