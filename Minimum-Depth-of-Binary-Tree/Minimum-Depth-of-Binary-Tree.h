/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Minimum-Depth-of-Binary-Tree.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/12/2013 12:43:22 AM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _MINIMUM_DEPTH_OF_BINARY_TREE_H_
#define _MINIMUM_DEPTH_OF_BINARY_TREE_H_

//Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    /* 
     * 对树的问题，大多都可以使用递归来解决
     * 思路很清晰，编码也比较简单 
     * */
    int minDepth(TreeNode *root) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!root) return 0;
        int lChildDepth = 0, rChildDepth = 0;
        if(root->left)
        	lChildDepth = minDepth(root->left);
        if(root->right)
        	rChildDepth = minDepth(root->right);
        if(root->left && root->right)
        	return 1 + std::min(lChildDepth, rChildDepth);
        if(root->left)
        	return 1 + lChildDepth;
        if(root->right)
        	return 1 + rChildDepth;
        return 1;
    }
};
#endif  // _MINIMUM_DEPTH_OF_BINARY_TREE_H_
