/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Maximum-Depth-of-Binary-Tree.h
 *    Description:  
 *        Version:  1.0
 *        Created:  10/17/2013 04:47:16 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _MAXIMUM_DEPTH_OF_BINARY_TREE_H_
#define _MAXIMUM_DEPTH_OF_BINARY_TREE_H_
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	/*
	 * 对树的问题，递归总是一种思路。对于这个求二叉树深度的问题，
	 * 我们可以归结出这样一种思路，从根节点开始求出它的左子树深度leftDepth
	 * 和右子树深度rightDepth，求出leftDepth和rightDepth的最大值，那么再加1
	 * 就是根节点的最大深度；递归的执行下去，结束条件就是当节点是叶子节点是，
	 * 返回深度1。 
	 */
    int maxDepth(TreeNode *root) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if( !root )
            return 0;
        int leftDepth = 0, rightDepth = 0;
        if( root->left )
            leftDepth = maxDepth(root->left);
        if( root->right )
            rightDepth = maxDepth(root->right);
        return 1 + std::max(leftDepth, rightDepth);
    }
};
#endif  // _MAXIMUM_DEPTH_OF_BINARY_TREE_H_
