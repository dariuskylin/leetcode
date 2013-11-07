/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Path-Sum.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/08/2013 12:50:56 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _PATH_SUM_H_
#define _PATH_SUM_H_

// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    /* 
     * 树的很多问题都可以用递归来解决，这道题目找的是root-to-leaf的和，那么root是肯定经过的
     * 所以我们可以分解出树的子树来解决:
     * 1、如果当前节点是叶子节点，而且当前节点的val等于sum，那么返回true
     * 2、对于其他情况，递归调用自身的左子树和右子树来解决；
     * */
    bool hasPathSum(TreeNode *root, int sum) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if( !root )		return false;
        if(root->val == sum && root->left == NULL && root->right == NULL)
        	return true;
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->right);
    }
};
#endif  // _PATH_SUM_H_
