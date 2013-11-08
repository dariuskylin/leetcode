/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Edit-Distance.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/08/2013 05:12:08 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _EDIT_DISTANCE_H_
#define _EDIT_DISTANCE_H_
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int minDistance(string word1, string word2) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(word1.size() == 0)	return word2.size();
        if(word2.size() == 0) 	return word1.size();
        int minInsert = 0, minDelete = 0, minReplace = 0;
        if(word1[word1.length() - 1] == word2[word2.length() - 1])
        	return minDistance(word1.substr(0, word1.length()-1), 
        		word2.substr(0, word2.length() -1));
        else
        {
        	//通过insert操作的min距离
        	minInsert = 1 + std::min(minDistance(word1, word2.substr(0, word2.length() - 1)), 
        		minDistance(word1.substr(0, word1.length()-1), word2));
        	//通过delete操作的min距离
        	//minDelete = 1 + std::min(minDistance(word1.substr(0, word1.length() -1), word2), 
        	//	minDistance(word1, word2.substr(0, word2.length() - 1)) );
        	//通过replace操作的min距离
        	minReplace = 1 + minDistance(word1.substr(0, word1.length() - 1), word2.substr(0, word2.length() - 1));
        	//返回值，应该是minInsert、minDelete、minReplace三个的最小值
        	//通过观察，minInsert=minDelete，所以我们可以省事，最小值可以只比较两个
        	return std::min(minInsert, minReplace);
        }
    }
};
#endif  // _EDIT_DISTANCE_H_
