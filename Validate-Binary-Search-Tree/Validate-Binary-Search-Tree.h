/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Validate-Binary-Search-Tree.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/20/2013 09:11:06 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _VALIDATE_BINARY_SEARCH_TREE_H_
#define _VALIDATE_BINARY_SEARCH_TREE_H_
#include <iostream>
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
     * 二叉搜索树的特点是左节点小于根节点，右子树大于根节点；左右子树也是二叉搜索树
     * 
     * */
    bool isValidBST(TreeNode *root) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!root) 	return true;
        if(!(root->left) && !(root->right)) 	return true;

  		TreeNode *mostLeftOfRchild , *mostRightOfLchild;
  		mostRightOfLchild = root->left;
  		while(mostRightOfLchild && (mostRightOfLchild->right) )
  			mostRightOfLchild = mostRightOfLchild->right;
		if(mostRightOfLchild&&(mostRightOfLchild->val >= root->val) )
			return false;
		mostLeftOfRchild = root->right;
  		while(mostLeftOfRchild && (mostLeftOfRchild->left) )
  			mostLeftOfRchild = mostLeftOfRchild->left;
		if(mostLeftOfRchild&&(mostLeftOfRchild->val <= root->val) )
			return false;	
  		return isValidBST(root->left)&&isValidBST(root->right);
    }
};
#endif  // _VALIDATE_BINARY_SEARCH_TREE_H_
