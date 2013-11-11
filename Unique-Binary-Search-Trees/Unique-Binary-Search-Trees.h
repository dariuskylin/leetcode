/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Unique-Binary-Search-Trees.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/11/2013 06:45:33 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _UNIQUE_BINARY_SEARCH_TREES_H_
#define _UNIQUE_BINARY_SEARCH_TREES_H_
#include <vector>
using std::vector;
class Solution {
public:
    /* 
     * 依次枚举出所有节点作为根节点，根据BST的性质，根节点左边的节点组成的左子树就成为了一个子问题
     * ，右子树同样；所以这是一个DP问题。
     * 按照DP问题的一般解法，使用顺序数组numSeqs来存储中间结果，自底向上
     * 求出所有中间值来即可
     * 需要注意的是，
     * 1、左右子树如果都不为空，那么tempSum应该用乘法原则；
     * 2、如果有一颗子树不为空，那么tempSum应该用加法；
     * 3、如果根节点即是叶子节点，那么只有1棵树，tempSum加1即可。
     * */
    int numTrees(int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        //用来存储所有的n对应的numTrees值
        vector<int> numSeqs(n+1, 0);
        numSeqs[0]=0, numSeqs[1]=1;
        if(n < 2)		return numSeqs[n];
        int tempSum = 0;
        int leftNodes, rightNodes;
        //从2到n自底向上依次计算到numSeqs(n)
        for(int i = 2; i <= n; i++)
        {
        	tempSum = 0;
        	//对于任意的numSeq(i)，从1到n依次枚举出所有BST顶点的情况
        	for(int rootPos = 1; rootPos <= i; rootPos++)
        	{
        		//leftNodes是以rootPos为根节点的树的左子树的个数，rightNodes是右子树的个数
        		leftNodes = rootPos - 1;
        		rightNodes = i - rootPos;
        		if(leftNodes && rightNodes)
        			tempSum +=numSeqs[rootPos-1] * numSeqs[i-rootPos];
        		else if(leftNodes || rightNodes)
        			tempSum += numSeqs[rootPos-1] + numSeqs[i-rootPos];
        		else
        			tempSum += 1;
        	}
        	numSeqs[i] = tempSum;
        }
        return numSeqs[n];
    }
};
#endif  // _UNIQUE_BINARY_SEARCH_TREES_H_
