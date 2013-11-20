/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  test.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  11/20/2013 09:16:19 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#include <iostream>
#include "Validate-Binary-Search-Tree.h"
using namespace std;
int main()
{
    TreeNode case11(1);
    TreeNode case12(2);
    TreeNode case13(3);
    case11.right = &case12;
    case12.left = &case13;
    Solution s;
    bool ret = s.isValidBST(&case11);
    if(ret)
        cout<<"valid"<<endl;
    else
        cout<<"not valid"<<endl;
    TreeNode case21(0);
    TreeNode case22(-1);
    case21.left = &case22;
    bool ret2 = s.isValidBST(&case21);
    if(ret2)
        cout<<"valid"<<endl;
    else
        cout<<"not valid"<<endl;

    return 0;
}
