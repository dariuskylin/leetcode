/*Copyright 2012 NDSL. All Rights Reserved.
 * =====================================================================================
 *       Filename:  Remove-Element.h
 *    Description:  
 *        Version:  1.0
 *        Created:  11/15/2013 11:58:10 PM
 *         Author:  dongyuchi (dongyuchi), dongyuchi@gmail.com
 *        Company:  UESTC.NDSL
 * =====================================================================================
 */
#ifndef _REMOVE_ELEMENT_H_
#define _REMOVE_ELEMENT_H_
class Solution {
public:
    /*  设置一个游标，游标左边的元素都不等于elem*/
    int removeElement(int A[], int n, int elem) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        int index = 0;
        for(int i = 0; i < n; ++i)
        	if(A[i] != elem)
        		A[index] = A[i], index++;
        return index;
    }
};
#endif  // _REMOVE_ELEMENT_H_
