/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/04/2013 08:15:17 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include "Longest-Substring-Without-Repeating-Characters.h"
using namespace std;
int main()
{
	string str1("BBBBB");
	string str2("abcabcbb");
	string str3("wlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcbynecdyggxxpklorellnmpapqfwkhopkmco");
    string str4("hnwnkuewhsqmgbbuqcljjivswmdkqtbxixmvtrrbljptnsnfwzqfjmafadrrwsofsbcnuvqhffbsaqxwpqcac");
	Solution s;
	cout<<"length of 'BBBBB':"<<s.lengthOfLongestSubstring(str1)<<endl;
	cout<<"length of 'abcabcbb':"<<s.lengthOfLongestSubstring(str2)<<endl;
	cout<<"length str3(12):"<<s.lengthOfLongestSubstring(str3)<<endl;
    cout<<"length str4(12):"<<s.lengthOfLongestSubstring(str4)<<endl;
    return 0; 
}
