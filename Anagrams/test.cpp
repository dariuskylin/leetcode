/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  05/24/2015 12:09:24 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include "anagrams.h"
#include <iostream>
#include <vector>

int main()
{
    Solution s;
    std::string str[] = {"lint", "intl", "inlt", "code"};
    std::string str1[] = {"ab", "ba", "cd", "dc", "e"};
    std::string str2[] = {"", "b", ""};
    std::string str3[] = {"", "b", ""};
    std::vector<std::string> vec(str, str+sizeof(str)/sizeof(std::string));
    std::vector<std::string> vec1(str1, str1+sizeof(str1)/sizeof(std::string));
    std::vector<std::string> vec2(str2, str2+sizeof(str2)/sizeof(std::string));
    std::vector<std::string> vec3(str3, str3+sizeof(str3)/sizeof(std::string));
    std::vector<std::string> ret = s.anagrams(vec);
    std::vector<std::string> ret1 = s.anagrams(vec1);
    std::vector<std::string> ret2 = s.anagrams(vec2);
    std::vector<std::string> ret3 = s.anagrams(vec3);
    for(int i = 0; i < ret.size(); i++)
        std::cout<<ret[i]<<std::endl;
    for(int i = 0; i < ret1.size(); i++)
        std::cout<<ret1[i]<<std::endl;
    std::cout<<"[None, b, None ] size: "<<ret2.size()<<std::endl;
    for(int i = 0; i < ret2.size(); i++)
        std::cout<<ret2[i]<<std::endl;
    std::cout<<"[None, None ] size: "<<ret3.size()<<std::endl;
    for(int i = 0; i < ret3.size(); i++)
        std::cout<<ret3[i]<<std::endl;
    return 0;
}
