/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Same-Tree.h
 *    Description:  
 *        Version:  1.0
 *        Created:  10/17/2013 10:31:56 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _SAME_TREE_H_
#define _SAME_TREE_H_
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
	 * 对树的问题，递归总是一种思路。对于这个判断二叉树相等的问题，
	 * 我们可以想象一下，如果两颗二叉树果真相等，那么他们的每个节点
	 * 的val值肯定相等的，他们的左子树和右子树也肯定是相等的。而判断
	 * 他们左子树和右子树是否相等，是一个递归子问题。
	 */
    bool isSameTree(TreeNode *p, TreeNode *q) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if( !p && !q)
            return true;
        if( !p || !q)
            return false;
        if( p->val != q->val)
            return false;
        if( isSameTree(p->left, q->left) == false)
            return false;
        if( isSameTree(p->right, q->right) == false)
            return false;
        return true;
    }
};
#endif  // _SAME_TREE_H_
