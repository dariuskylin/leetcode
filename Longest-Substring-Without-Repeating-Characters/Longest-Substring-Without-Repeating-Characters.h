/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Longest-Substring-Without-Repeating-Characters.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/04/2013 08:08:16 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_
#define _LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_
#include <string>
#include <iostream>
using std::string;
class Solution {
    public:
        /* 
         * 设置两个位置指针@begin和@pos，@begin指向子串的起始，@pos指向子串的终点
         * 1、初始@begin和@pos都指向0，然后@pos渐增；
         * 2、判断@pos的位置的字符是否出现过；
         * 3、如果@pos位置的字符没有出现过，标记这个字符已经出现过，@pos指向下一个位置；
         * 4、如果@pos位置的字符已经出现过，情况就比较复杂，因为这时候，我们需要重新设置@begin
         *    的位置。我们先记录下这个@begin和@pos之间的子串的长度，留作最大值比较。
         *    那么@begin的位置应该设置在哪里？很显然是@pos指向的字符之前所在的位置！
         *    我们找到这个位置，将它赋值给@begin，同时将在@begin的新位置和旧位置之间
         *    的字符都设置为没出现过。
         * 5、一直到@pos指向字符串的末尾，计算出最后一次最大值。因为这对应着最大子串就是
         *    输入字符串的末尾子串这种特殊情况
         * */
        int lengthOfLongestSubstring(string s) {
            // IMPORTANT: Please reset any member data you declared, as
            // the same Solution instance will be reused for each test case.
            if(s.size() < 2)
                return s.size();
            // @flagMap做hash作用，保存字符是否已经判断过。
            bool flagMap[256] = {false};
            // @count用于保存返回结果（最大长度）
            int count= 0;
            //begin指向子串的起点位置
            int begin = 0;
            //枚举所有子串的结束位置，与begin呼应
            for(int pos = 0; pos < s.size(); pos++)
            {
                if( !flagMap[s[pos]] )
                    flagMap[s[pos]] = true;
                else {
                    count = std::max(count, pos - begin);
                    // 当@pos指向了重复字符时，在begin-pos之间找到这个重复字符
                    // 将这个字符位置和@begin之间的字符的flagMap标志位都reset
                    while( s[begin] != s[pos] ) {
                        flagMap[s[begin]] = false;
                        begin++;
                    }
                    begin++;
                }
            }
            // 最后一步还需要判断一次最大值，这是对应于最大长度非重复子串位于字符串末尾的特殊情况
            return std::max(count, static_cast<int>(s.size() - begin));
  }
};
#endif  // _LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_
