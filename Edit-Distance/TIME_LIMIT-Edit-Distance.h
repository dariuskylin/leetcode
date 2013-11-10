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
    /*
     * 这是典型的DP问题
     * 对字符串A[1,2,...,m]和字符串B[1,2,...,n]，长度分别为m，n
     * 1、若A[m]=B[n]，那么A[1,...,m]和B[1,...,n]的编辑距离应该等于A[1,...,m-1]和B[1,...,n-1]
     * 2、若A[m]!=B[n]，情况就比较复杂：编辑方法分为insert、delete、replace三种。我们需要分别
     *    求出这三种方法的最小值，然后从这三个值中再取最小值。
     *    insert分为对A操作或B操作，所以有两个值，minDistance(A[1,...,m], B[1,...,n-1])和minDistance(A[1,...,m-1], B[1,...,n]) 
     *    delete同样分为对A和B操作，两个值，minDistance(A[1,...,m], B[1,...,n-1])和minDistance(A[1,...,m-1], B[1,...,n])，可以发现与insert具有一样的值 
     *    replace仅有一个值minDistance(A[1,...,m-1], B[1,...,n-1])
     */
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
        	/*
            //通过delete操作的min距离
            minDelete = 1 + std::min(minDistance(word1.substr(0, word1.length() -1), word2), 
        	minDistance(word1, word2.substr(0, word2.length() - 1)) );
            */
        	//通过replace操作的min距离
        	minReplace = 1 + minDistance(word1.substr(0, word1.length() - 1), word2.substr(0, word2.length() - 1));
        	/*
             *返回值，应该是minInsert、minDelete、minReplace三个的最小值
        	 *通过观察，minInsert=minDelete，所以我们可以省事，最小值可以只比较两个
             */
        	return std::min(minInsert, minReplace);
        }
    }
};
#endif  // _EDIT_DISTANCE_H_
